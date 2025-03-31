#include <stdio.h>

int main() {
    int quantidade, codigoRegiao;
    float valorTotal, valorFrete;

    printf("Digite a quantidade de itens (1 a 100): ");
    scanf("%d", &quantidade);
    printf("Informe o código da região (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &codigoRegiao);

    valorTotal = quantidade * 5.0;

    switch (codigoRegiao) {
        case 1: valorFrete = valorTotal * 0.10; printf("Local: Norte\n"); break;
        case 2: valorFrete = valorTotal * 0.08; printf("Local: Nordeste\n"); break;
        case 3: valorFrete = valorTotal * 0.12; printf("Local: Centro-Oeste\n"); break;
        case 4: valorFrete = valorTotal * 0.