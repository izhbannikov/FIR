----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:51:46 05/24/2014 
-- Design Name: 
-- Module Name:    lpmultiplier - Behavioral 
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
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity lpmultiplier is
	generic ( 
		widtha : integer := 8;
		widthb : integer := 8;
		pipeline : integer := 3;
		representation : string := "SIGNED";
		widthp : integer := 16;
		widths : integer := 16
	);
	Port (
		clk : in std_logic;
		dataa : in std_logic_vector (widtha-1 downto 0);
		datab : in std_logic_vector (widthb-1 downto 0);
		result : out std_logic_vector (widthp-1 downto 0)
	);
end lpmultiplier;

architecture Behavioral of lpmultiplier is
	subtype resdata is std_logic_vector (widthp-1 downto 0);
	type array_resdata is array (0 to pipeline-1) of resdata;
	signal result_buf : signed(widthp-1 downto 0);
begin
	multiplier: process(clk)
	begin
		if rising_edge(clk) then
			result_buf <= signed(dataa) * signed(datab);
		end if;
	end process multiplier;
	
	result <= std_logic_vector(result_buf);

end Behavioral;

