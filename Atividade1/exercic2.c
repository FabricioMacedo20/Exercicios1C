#include <stdio.h>

void inserirOrdenado(int array[], int *tamanho, int limite, int elemento) {
    if (*tamanho == limite) return;
    int i = *tamanho - 1;
    while (i >= 0 && array[i] > elemento) {
        array[i + 1] = array[i];
        i--;
    }
    array[i + 1] = elemento;
    (*tamanho)++;
}

void removerElemento(int array[], int *tamanho, int elemento) {
    int i, j;
    for (i = 0; i < *tamanho; i++) {
        if (array[i] == elemento) {
            for (j = i; j < *tamanho - 1; j++)
                array[j] = array[j + 1];
            (*tamanho)--;
            return;
        }
    }
}

int buscaBinaria(int array[], int tamanho, int elemento) {
    int esquerda = 0, direita = tamanho - 1, meio;
    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;
        if (array[meio] == elemento)
            return meio;
        if (array[meio] < elemento)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return -1;
}

void exibirLista(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int lista[10], qtdElementos = 0, escolha, valor;
    
    do {
        printf("\n1. Adicionar\n2. Excluir\n3. Pesquisar\n4. Mostrar Lista\n0. Sair\nEscolha: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Informe um número: ");
                scanf("%d", &valor);
                inserirOrdenado(lista, &qtdElementos, 10, valor
