----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:11:11 07/23/2017 
-- Design Name: 
-- Module Name:    writebacker - Behavioral 
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

entity writebacker is
	port (start : in std_logic;
			nzero : in std_logic;
			wb : in std_logic_vector(1 downto 0);
			write_i : in std_logic_vector(15 downto 0);
			reg_update : out std_logic;
			reg_new : out std_logic_vector(7 downto 0);
			pc_update : out std_logic;
			pc_new : out std_logic_vector(15 downto 0)
			);
end writebacker;

architecture Behavioral of writebacker is
begin
	process(start, wb, nzero)
	begin
		if (start = '1') then
			if (wb = "00") then
				reg_update <= '0';
				pc_update <= '0';
			elsif (wb = "01") then
				reg_update <= '0';
				pc_update <= '1';
			elsif (wb = "10") then
				if (nzero = '0') then
					reg_update <= '0';
					pc_update <= '1';
				else
					reg_update <= '0';
					pc_update <= '0';
				end if;
			else
				reg_update <= '1';
				pc_update <= '0';
			end if;
		else
			reg_update <= '0';
			pc_update <= '0';
		end if;
	end process;
	
	reg_new <= write_i(7 downto 0);
	pc_new <= write_i;
end Behavioral;

