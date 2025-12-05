# Cria o clock principal de 50MHz (20ns) na porta física CLOCK_50
create_clock -name "CLOCK_50" -period 20.000ns [get_ports {CLOCK_50}]

# Instrui o Quartus a calcular automaticamente a incerteza (jitter)
derive_clock_uncertainty

# Como você gera o clock VGA via lógica (not logic registers), isso ajuda o Quartus a entender
# (Nota: O ideal seria usar PLL, mas para este projeto isso resolve)
create_generated_clock -name "VGA_CLK" -source [get_ports {CLOCK_50}] -divide_by 2 [get_registers {vga_clk_reg}] 
# Nota: Se o nome do seu registrador de clock não for 'vga_clk_reg',
# apenas as duas primeiras linhas já resolvem 90% dos avisos.
