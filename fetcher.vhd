----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:38 07/23/2017 
-- Design Name: 
-- Module Name:    fetcher - Behavioral 
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

entity fetcher is
	port (rst : in std_logic;
			clk : in std_logic;
			t : in std_logic_vector(3 downto 0);
			pc_update : in std_logic;
			pc_i : in std_logic_vector(15 downto 0);
			ir_i : in std_logic_vector(15 downto 0);
			mreq : out std_logic;
			pc_o : out std_logic_vector(15 downto 0);
			ir_o : out std_logic_vector(15 downto 0)
			);
end fetcher;

architecture Behavioral of fetcher is
signal pc : std_logic_vector(15 downto 0);
signal ir : std_logic_vector(15 downto 0);
begin
	mreq <= t(0);
	ir <= ir_i;
	
	process(t(0))
	begin
		if rising_edge(t(0)) then
			pc_o <= pc;
		end if;
	end process;
	
	process(clk, t, ir)
	begin
		if (falling_edge(clk) and t = "0001") then
			ir_o <= ir;
		end if;
	end process;
	
	process(rst, t(1), pc_update, pc_i)
	begin
		if (rst = '1') then
			pc <= (others=>'0');
		elsif pc_update = '1' then
			pc <= pc_i;
		elsif rising_edge(t(1)) then
			pc <= pc + 1;
		end if;
	end process;
end Behavioral;