#include <stdio.h>

int main() {
    int valor;
    printf("Informe um número inteiro: ");
    scanf("%d", &valor);

    if (valor > 0)
        printf("O valor inserido é positivo.\n");
    else if (valor < 0)
        printf("O valor inserido é negativo.\n");
    else
        printf("O valor inserido é igual a zero.\n");

    return 0;
}
