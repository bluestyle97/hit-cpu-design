----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:11:38 07/23/2017 
-- Design Name: 
-- Module Name:    mem_access - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mem_access is
	port (mreq : in std_logic;
			pc : in std_logic_vector(15 downto 0);
			ir : out std_logic_vector(15 downto 0);
			
			nrd_i : in std_logic;
			nwr_i : in std_logic;
			addr : in std_logic_vector(15 downto 0);
			data_i : in std_logic_vector(7 downto 0);
			data_o : out std_logic_vector(7 downto 0);
			nmreq : out std_logic;
			nrd : out std_logic;
			nwr : out std_logic;
			nbhe : out std_logic;
			nble : out std_logic;
			ABus : out std_logic_vector(15 downto 0);
			DBus : inout std_logic_vector(15 downto 0);
			
			nprd_i : in std_logic;
			npwr_i : in std_logic;
			npreq : out std_logic;
			nprd : out std_logic;
			npwr : out std_logic;
			IOAD : out std_logic_vector(1 downto 0);
			
			IOR0 : in std_logic_vector(7 downto 0);
			IOR1 : in std_logic_vector(7 downto 0);
			IOR2 : in std_logic_vector(7 downto 0);
			IOR3 : in std_logic_vector(7 downto 0);
			IOW0 : out std_logic_vector(7 downto 0);
			IOW1 : out std_logic_vector(7 downto 0);
			IOW2 : out std_logic_vector(7 downto 0);
			IOW3 : out std_logic_vector(7 downto 0)
			);
end mem_access;

architecture Behavioral of mem_access is
begin
	ABus <= pc when mreq = '1' else
			  addr when (nrd_i = '0' or nwr_i = '0') else
			  (others=>'Z');
	nmreq <= '0' when (mreq  = '1' or nrd_i = '0' or nwr_i = '0') else '1';
	nrd <= '0' when (mreq = '1' or nrd_i = '0') else '1';
	nwr <= '0' when nwr_i = '0' else '1';
	nbhe <= '0' when mreq = '1' else '1';
	nble <= '0' when (mreq = '1' or nrd_i = '0' or nwr_i = '0') else '1';
	
	process(mreq, nrd_i, nprd_i, addr, DBus, IOR0, IOR1, IOR2, IOR3)
	begin
		if (mreq = '1') then
			ir <= DBus;
			data_o <= (others=>'Z');
		elsif (mreq = '0' and nrd_i = '0' and nprd_i = '1') then
			ir <= (others=>'Z');
			data_o <= DBus(7 downto 0);
		elsif (mreq = '0' and nrd_i = '1' and nprd_i = '0') then
			case addr(1 downto 0) is
				when "00" =>
					data_o <= IOR0;
				when "01" =>
					data_o <= IOR1;
				when "10" =>
					data_o <= IOR2;
				when others =>
					data_o <= IOR3;
			end case;
			ir <= (others=>'Z');
		else
			data_o <= (others=>'Z');
			ir <= (others=>'Z');
		end if;
	end process;
	
	process(mreq, nwr_i, npwr_i, addr, data_i, DBus)
	begin
		if (mreq = '0' and nwr_i = '0' and npwr_i = '1') then
			DBus(15 downto 8) <= "00000000";
			DBus(7 downto 0) <= data_i;
			IOW0 <= (others=>'Z');
			IOW1 <= (others=>'Z');
			IOW2 <= (others=>'Z');
			IOW3 <= (others=>'Z');
		elsif (mreq = '0' and nwr_i = '1' and npwr_i = '0') then
			case addr(1 downto 0) is
				when "00" =>
					IOW0 <= data_i;
					IOW1 <= (others=>'Z');
					IOW2 <= (others=>'Z');
					IOW3 <= (others=>'Z');
				when "01" =>
					IOW0 <= (others=>'Z');
					IOW1 <= data_i;
					IOW2 <= (others=>'Z');
					IOW3 <= (others=>'Z');
				when "10" =>
					IOW0 <= (others=>'Z');
					IOW1 <= (others=>'Z');
					IOW2 <= data_i;
					IOW3 <= (others=>'Z');
				when others =>
					IOW0 <= (others=>'Z');
					IOW1 <= (others=>'Z');
					IOW2 <= (others=>'Z');
					IOW3 <= data_i;
			end case;
			DBus <= (others=>'Z');
		else
			DBus <= (others=>'Z');
			IOW0 <= (others=>'Z');
			IOW1 <= (others=>'Z');
			IOW2 <= (others=>'Z');
			IOW3 <= (others=>'Z');
		end if;
	end process;
	
	process(nprd_i, npwr_i, addr)
	begin
		if (nprd_i = '0' and npwr_i = '1') then
			npreq <= '0';
			nprd <= '0';
			npwr <= '1';
			IOAD <= addr(1 downto 0);
		elsif (nprd_i = '1' and npwr_i = '0') then
			npreq <= '0';
			nprd <= '1';
			npwr <= '0';
			IOAD <= addr(1 downto 0);
		else
			npreq <= '1';
			nprd <= '1';
			npwr <= '1';
			IOAD <= (others=>'Z');
		end if;
	end process;
end Behavioral;

