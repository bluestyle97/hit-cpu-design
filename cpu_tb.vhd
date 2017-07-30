--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:11:52 07/25/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/cpu_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpu
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
 
ENTITY cpu_tb IS
END cpu_tb;
 
ARCHITECTURE behavior OF cpu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cpu
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         nmreq : OUT  std_logic;
         nrd : OUT  std_logic;
         nwr : OUT  std_logic;
         nbhe : OUT  std_logic;
         nble : OUT  std_logic;
         ABus : OUT  std_logic_vector(15 downto 0);
         DBus : INOUT  std_logic_vector(15 downto 0);
         npreq : OUT  std_logic;
         nprd : OUT  std_logic;
         npwr : OUT  std_logic;
         IOAD : OUT  std_logic_vector(1 downto 0);
         IOR0 : IN  std_logic_vector(7 downto 0);
         IOR1 : IN  std_logic_vector(7 downto 0);
         IOR2 : IN  std_logic_vector(7 downto 0);
         IOR3 : IN  std_logic_vector(7 downto 0);
         IOW0 : OUT  std_logic_vector(7 downto 0);
         IOW1 : OUT  std_logic_vector(7 downto 0);
         IOW2 : OUT  std_logic_vector(7 downto 0);
         IOW3 : OUT  std_logic_vector(7 downto 0);
         Ttest : OUT  std_logic_vector(3 downto 0);
         IRtest : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal IOR0 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR1 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR2 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR3 : std_logic_vector(7 downto 0) := (others => '0');

	--BiDirs
   signal DBus : std_logic_vector(15 downto 0);

 	--Outputs
   signal nmreq : std_logic;
   signal nrd : std_logic;
   signal nwr : std_logic;
   signal nbhe : std_logic;
   signal nble : std_logic;
   signal ABus : std_logic_vector(15 downto 0);
   signal npreq : std_logic;
   signal nprd : std_logic;
   signal npwr : std_logic;
   signal IOAD : std_logic_vector(1 downto 0);
   signal IOW0 : std_logic_vector(7 downto 0);
   signal IOW1 : std_logic_vector(7 downto 0);
   signal IOW2 : std_logic_vector(7 downto 0);
   signal IOW3 : std_logic_vector(7 downto 0);
   signal Ttest : std_logic_vector(3 downto 0);
   signal IRtest : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 40 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cpu PORT MAP (
          clk => clk,
          rst => rst,
          nmreq => nmreq,
          nrd => nrd,
          nwr => nwr,
          nbhe => nbhe,
          nble => nble,
          ABus => ABus,
          DBus => DBus,
          npreq => npreq,
          nprd => nprd,
          npwr => npwr,
          IOAD => IOAD,
          IOR0 => IOR0,
          IOR1 => IOR1,
          IOR2 => IOR2,
          IOR3 => IOR3,
          IOW0 => IOW0,
          IOW1 => IOW1,
          IOW2 => IOW2,
          IOW3 => IOW3,
          Ttest => Ttest,
          IRtest => IRtest
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
		wait for 40 ns;
		rst <= '0';
		
		DBus <= "0100011100000001";	--MVI R7, 00000001
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "1000011100000011";	--OUT R7, IOW3
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0100000100001110";	--MVI R1, 00001110
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0010000100000111";	--SUB R1, R7
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0101000100000111";	--MOV R1, R7
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0011000100000111";	--ADD R1, R7
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0110000100000000";	--STA R1, 0000000100000000
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0111001000000000";	--LDA R2, 0000000100000000
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 40 ns;
		DBus <= "0000000000000010";
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 40 ns;
		
		DBus <= "1000000100000001";	--OUT R1, IOW1
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "1001011100000010";	--IN R7, IOR2
		wait for 40 ns;
		DBUs <= (others=>'Z');
		wait for 40 ns;
		IOR2 <= "00110011";
		wait for 80 ns;
		
		DBus <= "0000000000000000";	--JMP 0011001100000000
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;
		
		DBus <= "0001000000001111";	--JZ 0011001100001111
		wait for 40 ns;
		DBus <= (others=>'Z');
		wait for 120 ns;

      wait;
   end process;

END;
