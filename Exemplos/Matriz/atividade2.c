#include <stdio.h>
#include <string.h>

int main(){
    char lojas[8][30];
    char produtos[4][30];
    float preco[8][4];
    int i, j;

    for (i = 0; i < 8; i++){
        printf("Digite o nome da loja %d: ", i+1);
        scanf("%s%*c", lojas[i]);
    }

    for (j = 0; j < 4; j++){
        printf("Digite o nome do produto %d: ", j+1);
        scanf("%s%*c", produtos[j]);
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o preço do produto %s na loja %s: ", produtos[j], lojas[i]);
            scanf("%f", &preco[i][j]);
        }
    }
    printf("\nProdutos com preço ate R$60,00:\n");
    for (i = 0; i < 8; i++){
        for (j = 0; j < 4; j++){
            if (preco[i][j] <= 60.0){
                printf("Produuto: %s | Loja: %s | Preço: R$ %.2f\n", produtos[j], lojas[i], preco[i][j]);
            }
        }
    }
    return 0;
}