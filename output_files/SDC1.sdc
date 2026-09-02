# -----------------------------------------------------------------------------
# Restrições de Clock Principal (50 MHz na placa DE1-SoC)
# -----------------------------------------------------------------------------
create_clock -name CLOCK_50 -period 20.000 [get_ports {CLOCK_50}]

# -----------------------------------------------------------------------------
# Clock Derivado em Fabric (clk_25m = 25 MHz via divisor de frequência/toggle)
# -----------------------------------------------------------------------------
create_generated_clock -name clk_25m \
                       -source [get_ports {CLOCK_50}] \
                       -divide_by 2 \
                       [get_registers {clk_25m_reg|q}]

# -----------------------------------------------------------------------------
# Jitter e Incerteza do Clock
# -----------------------------------------------------------------------------
derive_clock_uncertainty

# -----------------------------------------------------------------------------
# Entradas e Saídas Assíncronas / Fictícias (Reset, KEYs, SWs, VGA DAC R/G/B)
# -----------------------------------------------------------------------------
set_false_path -from [get_ports {KEY[*]}]
set_false_path -from [get_ports {SW[*]}]
set_false_path -to   [get_ports {VGA_R[*]}]
set_false_path -to   [get_ports {VGA_G[*]}]
set_false_path -to   [get_ports {VGA_B[*]}]
set_false_path -to   [get_ports {VGA_HS}]
set_false_path -to   [get_ports {VGA_VS}]