#include <stdio.h>

int main() {
    int estadoCivil, idade, qtdFilhos, idadeMaiorFilho;
    char nomeConjuge[50], localidade[50], genero;
    float renda;

    printf("Escolha seu estado civil (1-Solteiro, 2-Casado, 3-Divorciado, 4-Viúvo): ");
    scanf("%d", &estadoCivil);

    switch (estadoCivil) {
        case 1:
            printf("Informe sua idade: ");
            scanf("%d", &idade);
            printf("Status: Solteiro(a), Idade: %d anos\n", idade);
            break;
        case 2:
            printf("Informe seu gênero (M/F): ");
            scanf(" %c", &genero);
            printf("Nome do cônjuge: ");
            scanf(" %[^\n]", nomeConjuge);
            printf("Status: Casado(a), Gênero: %c, Cônjuge: %s\n", genero, nomeConjuge);
            break;
        case 3:
            printf("Número de filhos: ");
            scanf("%d", &qtdFilhos);
            if (qtdFilhos > 0) {
                printf("Idade do mais velho: ");
                scanf("%d", &idadeMaiorFilho);
            }
            printf("Status: Divorciado(a), Filhos: %d, Idade do mais velho: %d anos\n", qtdFilhos, qtdFilhos > 0
