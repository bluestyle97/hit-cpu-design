----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:10:39 07/23/2017 
-- Design Name: 
-- Module Name:    mem_manager - Behavioral 
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

entity mem_manager is
	port (start : in std_logic;
			jmp : in std_logic;
			memr : in std_logic;
			memw : in std_logic;
			ior : in std_logic;
			iow : in std_logic;
			alu_i : in std_logic_vector(7 downto 0);
			addr_i : in std_logic_vector(15 downto 0);
			nrd : out std_logic;
			nwr : out std_logic;
			nprd : out std_logic;
			npwr : out std_logic;
			addr : out std_logic_vector(15 downto 0);
			data_i : in std_logic_vector(7 downto 0);
			data_o : out std_logic_vector(7 downto 0);
			write_o : out std_logic_vector(15 downto 0)
			);
end mem_manager;

architecture Behavioral of mem_manager is
begin
	process(start, jmp, memr, memw, ior, iow, alu_i, addr_i, data_i)
	begin
		if (start = '1') then
			if (memr = '1') then			--LDA
				nrd <= '0';
				nwr <= '1';
				nprd <= '1';
				npwr <= '1';
				addr <= addr_i;
				data_o <= (others=>'Z');
				write_o <= "00000000" & data_i;
			elsif (memw = '1') then		--STA
				nrd <= '1';
				nwr <= '0';
				nprd <= '1';
				npwr <= '1';
				addr <= addr_i;
				data_o <= alu_i;
				write_o <= (others=>'Z');
			elsif (ior = '1') then			--IN
				nrd <= '1';
				nwr <= '1';
				nprd <= '0';
				npwr <= '1';
				addr <= addr_i;
				data_o <= (others=>'Z');
				write_o <= "00000000" & data_i;
			elsif (iow = '1') then			--OUT
				nrd <= '1';
				nwr <= '1';
				nprd <= '1';
				npwr <= '0';
				addr <= addr_i;
				data_o <= alu_i;
				write_o <= (others=>'Z');
			elsif (jmp = '0' and memr = '0' and memw = '0' and ior = '0' and iow = '0') then		--SUB	ADD MVI MOV
				nrd <= '1';
				nwr <= '1';
				nprd <= '1';
				npwr <= '1';
				addr <= (others=>'Z');
				data_o <= (others=>'Z');
				write_o <= "00000000" & alu_i;
			elsif (jmp = '1' and memr = '0' and memw = '0' and ior = '0' and iow = '0') then		--JMP	JZ
				nrd <= '1';
				nwr <= '1';
				nprd <= '1';
				npwr <= '1';
				addr <= (others=>'Z');
				data_o <= (others=>'Z');
				write_o <= addr_i;
			else
				nrd <= '1';
				nwr <= '1';
				nprd <= '1';
				npwr <= '1';
				addr <= (others=>'Z');
				data_o <= (others=>'Z');
				write_o <= (others=>'Z');
			end if;
		else
			nrd <= '1';
			nwr <= '1';
			nprd <= '1';
			npwr <= '1';
			addr <= (others=>'Z');
			data_o <= (others=>'Z');
		end if;
	end process;
end Behavioral;

