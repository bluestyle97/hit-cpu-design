--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:11:03 07/24/2017
-- Design Name:   
-- Module Name:   D:/Xilinx/Projects/CPU_test/mem_access_tb.vhd
-- Project Name:  CPU_test
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mem_access
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
 
ENTITY mem_access_tb IS
END mem_access_tb;
 
ARCHITECTURE behavior OF mem_access_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mem_access
    PORT(
         mreq : IN  std_logic;
         pc : IN  std_logic_vector(15 downto 0);
         ir : OUT  std_logic_vector(15 downto 0);
         nrd_i : IN  std_logic;
         nwr_i : IN  std_logic;
         addr : IN  std_logic_vector(15 downto 0);
         data_i : IN  std_logic_vector(7 downto 0);
         data_o : OUT  std_logic_vector(7 downto 0);
         nmreq : OUT  std_logic;
         nrd : OUT  std_logic;
         nwr : OUT  std_logic;
         nbhe : OUT  std_logic;
         nble : OUT  std_logic;
         ABus : OUT  std_logic_vector(15 downto 0);
         DBus : INOUT  std_logic_vector(15 downto 0);
         nprd_i : IN  std_logic;
         npwr_i : IN  std_logic;
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
         IOW3 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal mreq : std_logic := '0';
   signal pc : std_logic_vector(15 downto 0) := (others => '0');
   signal nrd_i : std_logic := '1';
   signal nwr_i : std_logic := '1';
   signal addr : std_logic_vector(15 downto 0) := (others => '0');
   signal data_i : std_logic_vector(7 downto 0) := (others => '0');
   signal nprd_i : std_logic := '1';
   signal npwr_i : std_logic := '1';
   signal IOR0 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR1 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR2 : std_logic_vector(7 downto 0) := (others => '0');
   signal IOR3 : std_logic_vector(7 downto 0) := (others => '0');

	--BiDirs
   signal DBus : std_logic_vector(15 downto 0);

 	--Outputs
   signal ir : std_logic_vector(15 downto 0);
   signal data_o : std_logic_vector(7 downto 0);
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
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mem_access PORT MAP (
          mreq => mreq,
          pc => pc,
          ir => ir,
          nrd_i => nrd_i,
          nwr_i => nwr_i,
          addr => addr,
          data_i => data_i,
          data_o => data_o,
          nmreq => nmreq,
          nrd => nrd,
          nwr => nwr,
          nbhe => nbhe,
          nble => nble,
          ABus => ABus,
          DBus => DBus,
          nprd_i => nprd_i,
          npwr_i => npwr_i,
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
          IOW3 => IOW3
        );

   -- Stimulus process
   stim_proc: process
   begin		
		mreq <= '1';
		pc <= "0000000000000000";
		DBus <= "0100000000000000";		--MVI
		wait for 100 ns;
		
		mreq <= '0';
		DBus <= (others=>'Z');
		wait for 300 ns;
		
		mreq <= '1';
		pc <= "0000000000000001";
		DBus <= "1000000000000000";		--OUT
		wait for 100 ns;
		
		mreq <= '0';
		DBus <= (others=>'Z');
		wait for 100 ns;
		
		npwr_i <= '0';
		addr <= "0000000000000000";
		data_i <= "00110011";
		wait for 100 ns;
		
		npwr_i <= '1';
		addr <= (others=>'Z');
		data_i <= (others=>'Z');
		wait for 100 ns;
		
		mreq <= '1';
		pc <= "0000000000001000";
		DBus <= "0110001000000000";		--STA
		wait for 100 ns;
		
		mreq <= '0';
		DBus <= (others=>'Z');
		wait for 100 ns;
		
		nwr_i <= '0';
		addr <= "0000000100000000";
		data_i <= "11001100";
		wait for 100 ns;
		
		nwr_i <= '1';
		addr <= (others=>'Z');
		data_i <= (others=>'Z');
		wait for 100 ns;
		
		mreq <= '1';
		pc <= "0000000000001001";
		DBus <= "0111001100000000";		--LDA
		wait for 100 ns;
		
		mreq <= '0';
		DBus <= (others=>'Z');
		wait for 100 ns;
		
		nrd_i <= '0';
		addr <= "0000000110000001";
		DBus <= "1010101001010101";
		wait for 100 ns;
		
		nrd_i <= '1';
		DBus <= (others=>'Z');
		addr <= (others=>'Z');
		
      wait;
   end process;

END;
