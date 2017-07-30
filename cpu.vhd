----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:08:27 07/23/2017 
-- Design Name: 
-- Module Name:    cpu - Behavioral 
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

entity cpu is
	port (clk : in std_logic;
			rst : in std_logic;
			nmreq : out std_logic;
			nrd : out std_logic;
			nwr : out std_logic;
			nbhe : out std_logic;
			nble : out std_logic;
			ABus : out std_logic_vector(15 downto 0);
			DBus : inout std_logic_vector(15 downto 0);
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
			IOW3 : out std_logic_vector(7 downto 0);
			Ttest : out std_logic_vector(3 downto 0);
			IRtest : out std_logic_vector(15 downto 0)
			);
end cpu;

architecture Behavioral of cpu is
component clock is
	port (clk : in std_logic;
			rst : in std_logic;
			t : out std_logic_vector(3 downto 0)
			);
end component;

component fetcher is
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
end component;

component alu is
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
end component;

component mem_manager is
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
end component;

component writebacker is
	port (start : in std_logic;
			nzero : in std_logic;
			wb : in std_logic_vector(1 downto 0);
			write_i : in std_logic_vector(15 downto 0);
			reg_update : out std_logic;
			reg_new : out std_logic_vector(7 downto 0);
			pc_update : out std_logic;
			pc_new : out std_logic_vector(15 downto 0)
			);
end component;

component mem_access is
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
end component;

signal clk_t : std_logic_vector(3 downto 0);
signal mreq_t : std_logic;
signal pc_t, ir_t : std_logic_vector(15 downto 0);
signal instruction : std_logic_vector(15 downto 0);
signal nzero_t : std_logic;
signal wb_t : std_logic_vector(1 downto 0);
signal jmp_t : std_logic;
signal memr_t, memw_t, ior_t, iow_t : std_logic;
signal alu_data : std_logic_vector(7 downto 0);
signal alu_addr : std_logic_vector(15 downto 0);
signal rd, wr, prd, pwr : std_logic;
signal addr_t : std_logic_vector(15 downto 0);
signal data_r, data_w : std_logic_vector(7 downto 0);
signal write_t : std_logic_vector(15 downto 0);
signal regup, pcup : std_logic;
signal regnew : std_logic_vector(7 downto 0);
signal pcnew : std_logic_vector(15 downto 0);

begin
u1 : clock 		  port map( clk => clk,
									rst => rst,
									t => clk_t				);
u2 : fetcher 	  port map( rst => rst,
									clk => clk,
									t => clk_t,
									pc_update => pcup,
									pc_i => pcnew,
									ir_i => ir_t,
									mreq => mreq_t,
									pc_o => pc_t,
									ir_o => instruction	);
u3 : alu 		  port map( start => clk_t(1),
									ir => instruction,
									reg_update =>regup,
									reg_i => regnew,
									nzero => nzero_t,
									jmp =>jmp_t,
									wb => wb_t,
									memr => memr_t,
									memw => memw_t,
									ior => ior_t,
									iow => iow_t,
									alu_o => alu_data,
									addr_o => alu_addr	);
u4 : mem_manager port map( start => clk_t(2),
									jmp => jmp_t,
									memr => memr_t,
									memw => memw_t,
									ior => ior_t,
									iow => iow_t,
									alu_i => alu_data,
									addr_i => alu_addr,
									nrd => rd,
									nwr => wr,
									nprd => prd,
									npwr => pwr,
									addr => addr_t,
									data_i => data_r,
									data_o => data_w,
									write_o => write_t	);
u5 : writebacker port map( start => clk_t(3),
									nzero => nzero_t,
									wb => wb_t,
									write_i => write_t,
									reg_update => regup,
									reg_new => regnew,
									pc_update => pcup,
									pc_new => pcnew		);
u6 : mem_access  port map( mreq => mreq_t,
									pc => pc_t,
									ir => ir_t,
									nrd_i => rd,
									nwr_i => wr,
									addr => addr_t,
									data_i => data_w,
									data_o => data_r,
									nmreq => nmreq,
									nrd => nrd,
									nwr => nwr,
									nbhe => nbhe,
									nble => nble,
									ABus => ABus,
									DBus => DBus,
									nprd_i => prd,
									npwr_i => pwr,
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
									IOW3 => IOW3			);
Ttest <= clk_t;
IRtest <= instruction;
end Behavioral;

