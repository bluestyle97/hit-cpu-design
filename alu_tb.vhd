--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:22:06 07/24/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/alu_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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
 
ENTITY alu_tb IS
END alu_tb;
 
ARCHITECTURE behavior OF alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         start : IN  std_logic;
         ir : IN  std_logic_vector(15 downto 0);
         reg_update : IN  std_logic;
         reg_i : IN  std_logic_vector(7 downto 0);
         nzero : OUT  std_logic;
         jmp : OUT  std_logic;
         wb : OUT  std_logic_vector(1 downto 0);
         memr : OUT  std_logic;
         memw : OUT  std_logic;
         ior : OUT  std_logic;
         iow : OUT  std_logic;
         alu_o : OUT  std_logic_vector(7 downto 0);
         addr_o : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal start : std_logic := '0';
   signal ir : std_logic_vector(15 downto 0) := (others => '0');
   signal reg_update : std_logic := '0';
   signal reg_i : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal nzero : std_logic;
   signal jmp : std_logic;
   signal wb : std_logic_vector(1 downto 0);
   signal memr : std_logic;
   signal memw : std_logic;
   signal ior : std_logic;
   signal iow : std_logic;
   signal alu_o : std_logic_vector(7 downto 0);
   signal addr_o : std_logic_vector(15 downto 0);
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          start => start,
          ir => ir,
          reg_update => reg_update,
          reg_i => reg_i,
          nzero => nzero,
          jmp => jmp,
          wb => wb,
          memr => memr,
          memw => memw,
          ior => ior,
          iow => iow,
          alu_o => alu_o,
          addr_o => addr_o
        );

   -- Stimulus process
   stim_proc: process
   begin	
		ir <= "0100011100110011";	--MVI R7, 00110011
      wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 60 ns;
		reg_update <= '1';
		reg_i <= "00110011";
		wait for 60 ns;
		
		reg_update <= '0';
		reg_i <= (others=>'Z');
		ir <= "0100011011001100";	--MVI R6, 11001100
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 60 ns;
		reg_update <= '1';
		reg_i <= "11001100";
		wait for 60 ns;
		
		reg_update <= '0';
		reg_i <= (others=>'Z');
		ir <= "1000011100000000";	--OUT R7, 00000000
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 60 ns;
		
		ir <= "0110011000000000";	--STA R6, 00000000
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 120 ns;
		
		ir <= "0111001100000000";	--LDA R6, 00000000
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 120 ns;
		
		ir <= "0011011000000111";	--ADD R6, R7
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 120 ns;
		
		ir <= "0000000000001111";	--JMP 0011001100001111;
		wait for 60 ns;
		start <= '1';
		wait for 60 ns;
		start <= '0';
		wait for 120 ns;
		
		wait;
   end process;

END;
