--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:37:33 07/24/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/writebacker_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: writebacker
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
 
ENTITY writebacker_tb IS
END writebacker_tb;
 
ARCHITECTURE behavior OF writebacker_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT writebacker
    PORT(
         start : IN  std_logic;
         nzero : IN  std_logic;
         wb : IN  std_logic_vector(1 downto 0);
         write_i : IN  std_logic_vector(15 downto 0);
         reg_update : OUT  std_logic;
         reg_new : OUT  std_logic_vector(7 downto 0);
         pc_update : OUT  std_logic;
         pc_new : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal start : std_logic := '0';
   signal nzero : std_logic := '0';
   signal wb : std_logic_vector(1 downto 0) := (others => '0');
   signal write_i : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal reg_update : std_logic;
   signal reg_new : std_logic_vector(7 downto 0);
   signal pc_update : std_logic;
   signal pc_new : std_logic_vector(15 downto 0);
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: writebacker PORT MAP (
          start => start,
          nzero => nzero,
          wb => wb,
          write_i => write_i,
          reg_update => reg_update,
          reg_new => reg_new,
          pc_update => pc_update,
          pc_new => pc_new
        );

   -- Stimulus process
   stim_proc: process
   begin		
		start <= '0';
		write_i <= (others=>'Z');
      wait for 100 ns;
		
		start <= '1';
		wb <= "00";
		nzero <= '0';
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		write_i <= "1111111100000000";
		wait for 100 ns;
		
		start <= '1';
		wb <= "01";
		nzero <= '0';
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		write_i <= "0000111100001111";
		wait for 100 ns;
		
		start <= '1';
		wb <= "10";
		nzero <= '0';
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		write_i <= "1111000011110000";
		wait for 100 ns;
		
		start <= '1';
		wb <= "10";
		nzero <= '1';
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		write_i <= "0000000011001100";
		wait for 100 ns;
		
		start <= '1';
		wb <= "11";
		nzero <= '0';
		wait for 100 ns;
		
		start <= '0';
		
      wait;
   end process;

END;
