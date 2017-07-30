----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:09:26 07/23/2017 
-- Design Name: 
-- Module Name:    alu - Behavioral 
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

entity alu is
	port (start : in std_logic;
			ir : in std_logic_vector(15 downto 0);
			reg_update : in std_logic;
			reg_i : in std_logic_vector(7 downto 0);
			nzero : out std_logic;
			jmp : out std_logic;
			wb : out std_logic_vector(1 downto 0);
			memr : out std_logic;
			memw : out std_logic;
			ior : out std_logic;
			iow : out std_logic;
			alu_o : out std_logic_vector(7 downto 0);
			addr_o : out std_logic_vector(15 downto 0)
			);
end alu;

architecture Behavioral of alu is
type reg8 is array (0 to 7) of std_logic_vector(7 downto 0);
signal reg : reg8;
begin
	process(start, reg_update)
	variable r1 : integer;
	variable r2 : integer;
	begin
		r1 := conv_integer(ir(10 downto 8));
		r2 := conv_integer(ir(2 downto 0));
		if rising_edge(start) then
			case reg(r1) is
				when "00000000" =>
					nzero <= '0';
				when others =>
					nzero <= '1';
			end case;
			case ir(15 downto 11) is
				when "00000" =>		--JMP
					jmp <= '1';
					wb <= "01";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					addr_o <= reg(7) & ir(7 downto 0);
				when "00010" =>		--JZ
					jmp <= '1';
					wb <= "10";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					addr_o <= reg(7) & ir(7 downto 0);
				when "00100" =>		--SUB
					jmp <= '0';
					wb <= "11";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					alu_o <= reg(r1) - reg(r2);
				when "00110" =>		--ADD
					jmp <= '0';
					wb <= "11";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					alu_o <= reg(r1) + reg(r2);
				when "01000" =>		--MVI
					jmp <= '0';
					wb <= "11";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					alu_o <= ir(7 downto 0);
				when "01010" =>		--MOV
					jmp <= '0';
					wb <= "11";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					alu_o <= reg(r2);
				when "01100" =>		--STA
					jmp <= '0';
					wb <= "00";
					memr <= '0';
					memw <= '1';
					ior <= '0';
					iow <= '0';
					alu_o <= reg(r1);
					addr_o <= reg(7) & ir(7 downto 0);
				when "01110" =>		--LDA
					jmp <= '0';
					wb <= "11";
					memr <= '1';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					addr_o <= reg(7) & ir(7 downto 0);
				when "10000" =>		--OUT
					jmp <= '0';
					wb <= "00";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '1';
					alu_o <= reg(r1);
					addr_o <= reg(7) & ir(7 downto 0);
				when "10010" =>		--IN
					jmp <= '0';
					wb <= "11";
					memr <= '0';
					memw <= '0';
					ior <= '1';
					iow <= '0';
					addr_o <= reg(7) & ir(7 downto 0);
				when others =>
					jmp <= '0';
					wb <= "00";
					memr <= '0';
					memw <= '0';
					ior <= '0';
					iow <= '0';
					alu_o <= (others=>'Z');
					addr_o <= (others=>'Z');
			end case;
		end if;
	end process;
	
	process(reg_update)
	variable r1 : integer;
	begin
		r1 := conv_integer(ir(10 downto 8));
		if rising_edge(reg_update) then
			reg(r1) <= reg_i;
		end if;
	end process;
end Behavioral;

