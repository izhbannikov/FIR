--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   07:57:51 05/24/2014
-- Design Name:   
-- Module Name:   Z:/hdl/fir/tb.vhd
-- Project Name:  fir
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fir
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb IS
END tb;
 
ARCHITECTURE behavior OF tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fir
    PORT(
         clk : IN  std_logic;
         Load_x : IN  std_logic;
         x_in : IN  std_logic_vector(8 downto 0);
         c_in : IN  std_logic_vector(8 downto 0);
         y_out : OUT  std_logic_vector(10 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal Load_x : std_logic := '0';
   signal x_in : std_logic_vector(8 downto 0) := (others => '0');
   signal c_in : std_logic_vector(8 downto 0) := (others => '0');

 	--Outputs
   signal y_out : std_logic_vector(10 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fir PORT MAP (
          clk => clk,
          Load_x => Load_x,
          x_in => x_in,
          c_in => c_in,
          y_out => y_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		Load_x <= '0';
		c_in <= "000000010";
		wait for 10 ns;
      c_in <= "000000010";
		wait for 10 ns;
		c_in <= "000000010";
		wait for 10 ns;
		c_in <= "000000010";
		wait for 10 ns;
		Load_x <= '1';
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		x_in <= "000000010";
		wait for 10 ns;
		wait;
   end process;

END;
