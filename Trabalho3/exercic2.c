#include <stdio.h>

int calcularU(int valor) {
    if (valor == 0)
        return 1;
    if (valor == 1)
        return 2;
    return 2 * calcularU(valor - 1) - 3 * calcularU(valor - 2);
}

int main() {
    int numero;
    printf("Informe um valor para o número: ");
    scanf("%d", &numero);
    printf("Resultado de U(%d) = %d\n", numero, calcularU(numero));
    return 0;
}
