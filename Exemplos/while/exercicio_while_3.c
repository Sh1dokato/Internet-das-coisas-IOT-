#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco, custo, imposto, precoFinal;
    char refri, categoria; 
    int totalProdutos = 12;

    float somaAdicionais = 0, totalImpostos = 0;
    float maiorPreco = 0, menorPreco = 0;
    int qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;

    for (int i = 1; i <= totalprodutos; i++){
        printf("\nProduto %d\n", i);

        printf("Digite o preço unitario: "),
        scanf("%f", &preco),

        printf("O produto precisa de refrigeração? (S ou N)");
        scanf("%c", &refri);

        printf("Digite a categoria do produto (A - Alimentação, L - Limpeza, V - Vestuario): ");
        scanf("%c", &categoria);

        // Aqui vai ser o lugar que vai calcular o custo da estocagem dos produtos da loja

        custo = 0;
        if (preco <= 20){
            if (refri == 'N' || refri == 'n'){
                if(categoria == 'A' || categoria == 'a') custo = 2;
                if(categoria == 'L' || categoria == 'l') custo = 3;
                if(categoria == 'V' || categoria == 'v') custo = 4;
            }
        }
        else if (preco > 20 && preco <= 50){
            if (refri == 'S' || refri == 's'){
                custo = 6;
            } else {
                custo = 0;
            }
        }
        else{
            if (refri == 'S' || refri == '5'){
                if (categoria == 'A' || categoria == 'a') custo = 5;
                else if (categoria == 'L' || categoria == l) custo = 2;
                else if (categoria == 'V' || categoria == 'v') custo = 4;
            else {
                if (categoria == 'A' || categoria == 'a' || categoria == 'V' || categoria == 'v') custo = 0;
                else if (categoria == 'L' || categoria == 'l') custo = 1;
            }
        }

        // Area que vai calculr os impostos dos produtos da loja
        if ((categoria == 'A' || categoria == 'a')  && (refri == 'S' refri == 's')){
            imposto = preco * 0.04; //imposto de 4% por produto
        }else {
            imposto = preco * 0.02; //Imposto de 2% por produto
        }
        //Preços finais

        precoFinal = preco + custo + imposto;

        //Classificação
        if (precoFinal <= 20){
            printf("Classificação: Barato\n");
            qtdBarato++;
        } else if (precoFinal <= 100){
            printf("Classificação: Preço normal\n"):
            qtdNormal++
        } else{
            printf("Classificação: Caro \n");
            qtdCaro++
        }

        printf("O custo de estocagem foi de: R$ %.2f\n ", custo);
        printf("O custo de imposto foi de: R$ %.2f\n ", imposto);
        printf("O custo do preço final foi de: R$ %.2f\n ", precoFinal);

        somaAdicionais += ( custo + impoto);
        totalImpostos += imposto;

        if (i == 1){
            maiorPreco = menorPreco = precoFinal;
        } else {
            if (precoFinal > maiorPreco) maiorPreco = precoFinal;
            if (precoFinal < maiorPreco) menorPreco = precoFinal;
        }
    }

    //Relatorio de tudo
    printf("\nRelatorio final\n");
    prinft("A média dos valores adicionais foi de R$: %.2f\n", somaAdicionais / totalProdutos);
    prinft("Maior preço final: R$ %.2f", maiorPreco);
    prinft("Menor preço final: R$ %.2f", menorPreco);
    prinft("Total impostos: R$ %.2f", totalImpostos);
    prinft("Quantidade de produtos barato: R$ %.2f", qtdnbarato);
    prinft("Quantidade de produtos com preço normal: R$ %.2f", qtdNormal);
    prinft("Quantidade de produtos com preço caro: R$ %.2f", qtdCaro);
}
return 0;
}