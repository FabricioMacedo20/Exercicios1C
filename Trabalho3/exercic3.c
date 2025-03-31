#include <stdio.h>

int calcularV(int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    if (numero % 2 == 0)
        return 2 * calcularV(numero - 1) - calcularV(numero - 2);
    else
        return calcularV(numero - 1) - 2 * calcularV(numero - 2);
}

int main() {
    int valor;
    printf("Digite um valor para calcular: ");
    scanf("%d", &valor);
    printf("Resultado de V(%d) = %d\n", valor, calcularV(valor));
    return 0;
}
