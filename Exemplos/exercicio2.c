#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Cod, Nveiculos, Nacidentes;
    float MediaAcidentes = 0;       
    int totalVeiculos = 0;        
    int CidadesMenos2000 = 0;  
    int maiorAcidente = 0;
    int cidadeMaior = 0;      

    for (int i = 1; i <= 5; i++) {
        printf("Cidade %d\n", i);
        printf("Digite o código da cidade: ");
        scanf("%d", &Cod);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &Nveiculos);
        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &Nacidentes);

        totalVeiculos += Nveiculos;

        if (Nacidentes > maiorAcidente) {
            maiorAcidente = Nacidentes;
            cidadeMaior = Cod;
        } 
        if (Nveiculos < 2000) {
            MediaAcidentes += Nacidentes;
            CidadesMenos2000++;
        }
    }
    printf("Letra A: A cidade com maior número de acidentes é a de código %d com %d acidentes.\n", cidadeMaior, maiorAcidente);
    printf("Letra B: A média de veículos por cidade é: %.2f\n", totalVeiculos / 5.0);

    if (CidadesMenos2000 > 0) {
        printf("A média de acidentes de trânsito nas cidades com menos de 2000 veículos é: %.2f\n", MediaAcidentes / CidadesMenos2000);
    } else {
        printf("Não tem cidades com menos de 2000 veículos.\n");
    }
}
