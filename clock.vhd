----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:09:02 07/23/2017 
-- Design Name: 
-- Module Name:    clock - Behavioral 
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

entity clock is
	port (clk : in std_logic;
			rst : in std_logic;
			t : out std_logic_vector(3 downto 0)
			);
end clock;

architecture Behavioral of clock is
signal temp : std_logic_vector(3 downto 0) := "0000";
begin
	process(clk, rst)
	begin
		if rst = '1' then
			t <= "0000";
			temp <= "0001";
		elsif rising_edge(clk) then
			t <= temp;
			case temp is
				when "0000" =>
					temp <= "0001";
				when "0001" =>
					temp <= "0010";
				when "0010" =>
					temp <= "0100";
				when "0100" =>
					temp <= "1000";
				when "1000" =>
					temp <= "0001";
				when others =>
					null;
			end case;
		end if;
	end process;
end Behavioral;