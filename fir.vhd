----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:57:45 05/23/2014 
-- Design Name: 
-- Module Name:    fir - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL; 
USE ieee.std_logic_unsigned.ALL;

entity fir is
	generic ( W1 : integer := 9; -- Input bit width
				 W2 : integer := 18; -- Multiplier bit width
				 W3 : integer := 19; -- Adder width
				 W4 : integer := 11; -- Output bit width
				 L : integer := 4; -- Filter length
				 Mpipe : integer := 3 -- Pipeline steps of multipline
				);
	port( clk : in std_logic;
			Load_x : in std_logic;
			x_in : in std_logic_vector(W1-1 downto 0);
			c_in : in std_logic_vector(W1-1 downto 0);
			y_out : out std_logic_vector(W4-1 downto 0));
end fir;

architecture Behavioral of fir is

component lpmultiplier is 
		generic ( 
			widtha : integer := 8;
			widthb : integer := 8;
			pipeline : integer := 3;
			representation : string := "SIGNED";
			widthp : integer := 16;
			widths : integer := 16
		);
		Port(clk : in std_logic;
			dataa : in std_logic_vector (W1-1 downto 0);
			datab : in std_logic_vector (W1-1 downto 0);
			result : out std_logic_vector (W2-1 downto 0)
		);
end component;


subtype N1BIT is std_logic_vector(W1-1 downto 0);
subtype N2BIT is std_logic_vector(W2-1 downto 0);
subtype N3BIT is std_logic_vector(W3-1 downto 0);
type ARRAY_N1BIT is array (0 to L-1) of N1BIT;
type ARRAY_N2BIT is array (0 to L-1) of N2BIT;
type ARRAY_N3BIT is array (0 to L-1) of N3BIT;

signal x : N1BIT;
signal y : N3BIT;
signal c : ARRAY_N1BIT; -- Coefficient array
signal p : ARRAY_N2BIT; -- Product array
signal a : ARRAY_N3BIT; -- Adder array

begin

	Load: process -- Load data or coefficients
	begin
		wait until clk = '1';
		if (Load_x = '0') then 
			c(L-1) <= c_in; -- Store coefficient in register
			for i in L-2 downto 0 loop -- Coefficients shift one
				c(i) <= c(i+1);
			end loop;
		else 
			x <= x_in; -- Get one data sample at a time
		end if;
	end process Load;
				
	Sop: process(clk) -- Compute sum of products
	begin
		if clk'event and (clk = '1') then
			for i in 0 to L-2 loop -- Compute the transposed 
				a(i) <= (p(i)(W2-1) & p(i)) + a(i+1); -- filter adds
			end loop;
			a(L-1) <= p(L-1)(W2-1) & p(L-1); -- First TAP has 
			end if;									-- only a register
			y <= a(0);
	end process Sop;
	
	-- Instantiate L pipelined multiplier
	MulGen: for i in 0 to L-1 generate
	Muls: lpmultiplier 
		generic map ( -- Multiply p(i) = c(i) * x; widtha => W1, widthb => W2,
				pipeline => Mpipe, 
				representation => "SIGNED", 
				widtha => W1,
				widthb => W1,
				widthp => W2,
				widths => W2)
		port map ( clk => clk, 
					  dataa => x,
					  datab => c(i), 
					  result => p(i));
	end generate;

	y_out <= y(W3-1 downto W3-W4);

end Behavioral;

