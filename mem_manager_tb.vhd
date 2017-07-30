--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:01:58 07/24/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/mem_manager_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mem_manager
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
 
ENTITY mem_manager_tb IS
END mem_manager_tb;
 
ARCHITECTURE behavior OF mem_manager_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mem_manager
    PORT(
         start : IN  std_logic;
         jmp : IN  std_logic;
         memr : IN  std_logic;
         memw : IN  std_logic;
         ior : IN  std_logic;
         iow : IN  std_logic;
         alu_i : IN  std_logic_vector(7 downto 0);
         addr_i : IN  std_logic_vector(15 downto 0);
         nrd : OUT  std_logic;
         nwr : OUT  std_logic;
         nprd : OUT  std_logic;
         npwr : OUT  std_logic;
         addr : OUT  std_logic_vector(15 downto 0);
         data_i : IN  std_logic_vector(7 downto 0);
         data_o : OUT  std_logic_vector(7 downto 0);
         write_o : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal start : std_logic := '0';
   signal jmp : std_logic := '0';
   signal memr : std_logic := '0';
   signal memw : std_logic := '0';
   signal ior : std_logic := '0';
   signal iow : std_logic := '0';
   signal alu_i : std_logic_vector(7 downto 0) := (others => '0');
   signal addr_i : std_logic_vector(15 downto 0) := (others => '0');
   signal data_i : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal nrd : std_logic;
   signal nwr : std_logic;
   signal nprd : std_logic;
   signal npwr : std_logic;
   signal addr : std_logic_vector(15 downto 0);
   signal data_o : std_logic_vector(7 downto 0);
   signal write_o : std_logic_vector(15 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mem_manager PORT MAP (
          start => start,
          jmp => jmp,
          memr => memr,
          memw => memw,
          ior => ior,
          iow => iow,
          alu_i => alu_i,
          addr_i => addr_i,
          nrd => nrd,
          nwr => nwr,
          nprd => nprd,
          npwr => npwr,
          addr => addr,
          data_i => data_i,
          data_o => data_o,
          write_o => write_o
        );

   -- Stimulus process
   stim_proc: process
   begin		
      start <= '0';
		jmp <= '0';
		memr <= '1';
		memw <= '0';
		ior <= '0';
		iow <= '0';
		alu_i <= (others=>'Z');
		addr_i <= "0000000011111111";
		wait for 100 ns;
		
      start <= '1';		--LDA
		data_i <= "11110000";
      wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		jmp <= '0';
		memr <= '0';
		memw <= '1';
		ior <= '0';
		iow <= '0';
		alu_i <= "00110011";
		addr_i <= "0000111100001111";
		wait for 100 ns;
		
		start <= '1';		--STA
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		jmp <= '0';
		memr <= '0';
		memw <= '0';
		ior <= '1';
		iow <= '0';
		alu_i <= (others=>'Z');
		addr_i <= "1111000011110000";
		wait for 100 ns;
		
		start <= '1';		--IN
		data_i <= "10000001";
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;
		
		jmp <= '0';
		memr <= '0';
		memw <= '0';
		ior <= '0';
		iow <= '1';
		alu_i <= "10101010";
		addr_i <= "0011001100110011";
		wait for 100 ns;
		
		start <= '1';		--OUT
		wait for 100 ns;
		
		start <= '0';		
		wait for 200 ns;
		
		jmp <= '1';
		memr <= '0';
		memw <= '0';
		ior <= '0';
		iow <= '0';
		alu_i <= "10011001";
		addr_i <= "0100010001000100";
		wait for 100 ns;
		
		start <= '1';		--JMP
		wait for 100 ns;
		
		start <= '0';
		wait for 200 ns;

      wait;
   end process;

END;
