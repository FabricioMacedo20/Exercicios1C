#include <stdio.h>

int main() {
    float valor, acumulador = 0;
    
    for (int contador = 0; contador < 10; contador++) {
        printf("Informe um número: ");
        scanf("%f", &valor);
        printf("A metade é: %.2f\n", valor / 2);
        acumulador += valor;
    }
    
    printf("Valor médio: %.2f\n", acumulador / 10);
    return 0;
}
