#include <stdio.h>

int main() {
    int valor;
    printf("Informe um número inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0)
        printf("O número %d é um número par.\n", valor);
    else
        printf("O número %d é um número ímpar.\n", valor);

    return 0;
}
