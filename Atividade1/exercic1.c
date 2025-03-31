#include <stdio.h>

int buscarSequencial(int vetor[], int qtd, int valor) {
    for (int i = 0; i < qtd; i++)
        if (vetor[i] == valor)
            return 1;
    return 0;
}

void inserirSemRepetir(int vetor[], int valor, int *qtd, int max) {
    if (*qtd < max && !buscarSequencial(vetor, *qtd, valor)) {
        vetor[*qtd] = valor;
        (*qtd)++;
    }
}

void percorrer(int vetor[], int qtd) {
    for (int i = 0; i < qtd; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int lista[10], qtd = 0, num;
    printf("Digite 5 números distintos:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        inserirSemRepetir(lista, num, &qtd, 10);
    }
    printf("Lista: ");
    percorrer(lista, qtd);
    return 0;
}