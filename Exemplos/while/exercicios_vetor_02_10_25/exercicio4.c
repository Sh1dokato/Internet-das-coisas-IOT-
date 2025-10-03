#include <stdio.h>
#define TAMANHO 10

int main(){
    float preco[TAMANHO], totalObjeto[TAMANHO];
    int quantidade[TAMANHO];
    float totalVendas = 0, comissao, salarioFixo = 545;
    int maisVendido = 0, i;

    for(i = 0; i < TAMANHO; i++){
        printf("Preço do objeto %d : ", i+1);
        scanf("%f", &preco[i]);
        printf("Quantidade do objeto %d : ", i+1);
        scanf("%d", &quantidade[i]);
    }

    for (i = 0; i < TAMANHO; i++){
        totalObjeto[i] = preco[i] * quantidade[i];
        printf("Objeto %d || Qtd: %d | preço: %.2f | Total: %.2f\n", i+1, quantidade[i], preco[i], totalObjeto[i]);
        totalVendas += totalObjeto[i];
        if (quantidade[i] > quantidade[maisVendido]){
            maisVendido = i;

        }
    }

    comissao = totalVendas * 0.05;

    printf("\n Total vendas: %.2f\n", totalVendas);
    printf("Comissão: %.2f\n", comissao);
    printf("Salario final: %.2f\n", salarioFixo + comissao);
    printf("Mais vendido: Objeto %d (Qtd: %d)\n", maisVendido + 1, quantidade[maisVendido]);

    return 0;

     //Feito por Ruan de mello Vieira
}