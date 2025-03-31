#include <stdio.h>

int calcularS(int valor) {
    if (valor == 0)
        return 1;
    return 2 * calcularS(valor - 1) + 1;
}

int main() {
    int numero;
    printf("Informe um valor para o número: ");
    scanf("%d", &numero);
    printf("Resultado de S(%d) = %d\n", numero, calcularS(numero));
    return 0;
}
