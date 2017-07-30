--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:19:02 07/25/2017
-- Design Name:   
-- Module Name:   F:/CPU_test/fetcher_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fetcher
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
 
ENTITY fetcher_tb IS
END fetcher_tb;
 
ARCHITECTURE behavior OF fetcher_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fetcher
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         t : IN  std_logic_vector(3 downto 0);
         pc_update : IN  std_logic;
         pc_i : IN  std_logic_vector(15 downto 0);
         ir_i : IN  std_logic_vector(15 downto 0);
         mreq : OUT  std_logic;
         pc_o : OUT  std_logic_vector(15 downto 0);
         ir_o : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal t : std_logic_vector(3 downto 0) := (others => '0');
   signal pc_update : std_logic := '0';
   signal pc_i : std_logic_vector(15 downto 0) := (others => '0');
   signal ir_i : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal mreq : std_logic;
   signal pc_o : std_logic_vector(15 downto 0);
   signal ir_o : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 40 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fetcher PORT MAP (
          rst => rst,
          clk => clk,
          t => t,
          pc_update => pc_update,
          pc_i => pc_i,
          ir_i => ir_i,
          mreq => mreq,
          pc_o => pc_o,
          ir_o => ir_o
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
      rst <= '1';
		wait for 100 ns;
		
		rst <= '0';
		t(0) <= '1';
		ir_i <= "1111000011110000";
		wait for 100 ns;
		
		t(0) <= '0';
		t(1) <= '1';
		ir_i <= (others=>'Z');
		wait for 100 ns;
		
		t(1) <= '0';
		wait for 200 ns;
		
		t(0) <= '1';
		ir_i <= "0000111100001111";
		wait for 100 ns;
		
		t(0) <= '0';
		t(1) <= '1';
		ir_i <= (others=>'Z');
		wait for 100 ns;
		
		t(1) <= '0';
		wait for 200 ns;
		
		t(0) <= '1';
		ir_i <= "1111000000001111";
		wait for 100 ns;
		 
		t(0) <= '0';
		t(1) <= '1';
		ir_i <= (others=>'Z');
		wait for 100 ns;
		
		t(1) <= '0';
		wait for 100 ns;
		
		pc_update <= '1';
		pc_i <= "0000000011111111";
		wait for 100 ns;
		
		t(0) <= '1';
		pc_update <= '0';
		pc_i <= (others=>'Z');
		ir_i <= "0000111111110000";
		wait for 100 ns;
		
		t(0) <= '0';
		t(1) <= '1';
		ir_i <= (others=>'Z');
		wait for 100 ns;
		
		t(1) <= '0';
		wait for 200 ns;
		
		t(0) <= '1';
		ir_i <= "1111111100000000";
      wait for 100 ns;
		
		t(0) <= '0';
		t(1) <= '1';
		ir_i <= (others=>'Z');

      wait;
   end process;

END;
