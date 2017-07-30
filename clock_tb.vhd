--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:41:19 07/23/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/clock_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: clock
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
 
ENTITY clock_tb IS
END clock_tb;
 
ARCHITECTURE behavior OF clock_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT clock
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         t : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal t : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 40 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: clock PORT MAP (
          clk => clk,
          rst => rst,
          t => t
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
      wait for 100 ns;	
		
		rst <= '1';
		wait for 100 ns;
		rst <= '0';

      wait;
   end process;

END;
