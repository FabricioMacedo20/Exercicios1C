#include <stdio.h>
#include <string.h>

typedef struct {
    char titular[50];
    int numeroConta;
    float saldo;
} ContaBancaria;

void adicionarConta(ContaBancaria contas[], int *quantidade, int limite) {
    if (*quantidade == limite) return;
    printf("Nome do titular: ");
    scanf(" %[^\n]", contas[*quantidade].titular);
    printf("Número da conta: ");
    scanf("%d", &contas[*quantidade].numeroConta);
    printf("Saldo inicial: ");
    scanf("%f", &contas[*quantidade].saldo);
    (*quantidade)++;
}

void procurarPorConta(ContaBancaria contas[], int quantidade, int numero) {
    for (int i = 0; i < quantidade; i++) {
        if (contas[i].numeroConta == numero) {
            printf("Conta encontrada: Titular: %s, Saldo: %.2f\n", contas[i].titular, contas[i].saldo);
            return;
        }
    }
    printf("Conta não localizada.\n");
}

void procurarPorNome(ContaBancaria contas[], int quantidade, char nome[]) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(contas[i].titular, nome) == 0) {
            printf("Conta localizada: Número: %d, Saldo: %.2f\n", contas[i].numeroConta, contas[i].saldo);
            return;
        }
    }
    printf("Titular não encontrado.\n");
}

void listarContas(ContaBancaria contas[], int quantidade) {
    for (int i = 0; i < quantidade; i++)
        printf("Titular: %s, Conta: %d, Saldo: %.2f\n", contas[i].titular, contas[i].numeroConta, contas[i].saldo);
}

int main() {
    ContaBancaria contas[10];
    int quantidadeContas = 0, opcao, numeroConta;
    char nomeTitular[50];

    do {
        printf("\n1. Adicionar Conta\n2. Buscar por Número da Conta\n3. Buscar por Nome\n4. Exibir Contas\n0. Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                adicionarConta(contas, &quantidadeContas, 10);
                break;
            case 2:
                printf("Digite o número da conta: ");
                scanf("%d", &numeroConta);
                procurarPorConta(contas, quantidadeContas, numeroConta);
                break;
            case 3:
                printf("Digite o nome do titular: ");
                scanf(" %[^\n]", nomeTitular);
                procurarPorNome(contas, quantidadeContas, nomeTitular);
                break;
            case 4:
                listarContas(contas, quantidadeContas);
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
