#include <stdio.h>

int main() {
    int mat[5][3];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o estoque do produto %d no armazem %d: ", j + 1, i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (j = 0; j < 3; j++) {
        printf("Digite o custo do produto %d: ", j + 1);
        scanf("%d", &mat[4][j]);
    }

    printf("\n--- Resultados ---\n");
    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
        printf("Total de itens no armazem %d: %d\n", i + 1, soma);
    }
    int maior = mat[0][1];
    int armazemMaior = 1;
    for (i = 1; i < 4; i++) {
        if (mat[i][1] > maior) {
            maior = mat[i][1];
            armazemMaior = i + 1;
        }
    }
    printf("\nArmazem com maior estoque do produto 2: %d (estoque %d)\n", armazemMaior, maior);

    int menorSoma = 99999, armazemMenor = 1;
    for (i = 0; i < 4; i++) {
        int soma = 0;
        for (j = 0; j < 3; j++)
            soma += mat[i][j];
        if (soma < menorSoma) {
            menorSoma = soma;
            armazemMenor = i + 1;
        }
    }
    printf("Armazem com menor estoque total: %d (estoque %d)\n", armazemMenor, menorSoma);

    for (j = 0; j < 3; j++) {
        int total = 0;
        for (i = 0; i < 4; i++) {
            total += mat[i][j];
        }
        int custo = total * mat[4][j];
        printf("Custo total do produto %d: %d\n", j + 1, custo);
    }
    for (i = 0; i < 4; i++) {
        int custoTotal = 0;
        for (j = 0; j < 3; j++) {
            custoTotal += mat[i][j] * mat[4][j];
        }
        printf("Custo total do armazem %d: %d\n", i + 1, custoTotal);
    }

    return 0;
}
//Feito por Ruan de Mello Vieira
