module power_on_reset (
    input clk,
    output reg reset
);
    // Um contador simples para manter o reset alto por alguns ciclos
    reg [3:0] counter = 0;

    always @(posedge clk) begin
        if (counter < 15) begin
            counter <= counter + 1;
            reset <= 1'b1; // Mantém reset ativado
        end else begin
            reset <= 1'b0; // Libera o reset
        end
    end
endmodule