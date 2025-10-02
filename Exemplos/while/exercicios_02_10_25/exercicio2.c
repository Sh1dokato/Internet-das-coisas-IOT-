#include <stdio.h>

int main() {
    char *carros[5] = {"Fusca", "Gol", "Camaro", "Ferrari", "Porsche"};
    float consumo[5], litros, menorLitros, distancia = 1000;
    int i, maisEconomico = 0;
    float 

    for (i = 0; i < 5; i++) {
        printf("Digite o consumo do %s (km/l): ", carros[i]);
        scanf("%f", &consumo[i]);
    }
    menorLitros = distancia / consumo[0];
    printf("\nConsumo de cada carro para %.0f km:\n", distancia);
    for (i = 0; i < 5; i++) {
        litros = distancia / consumo[i];
        printf("%s -> %.2f litros\n", carros[i], litros);

        if (litros < menorLitros) {
            menorLitros = litros;
            maisEconomico = i;
        }
    }
    printf("\nO carro mais economico é o %s, gastando %.2f litros em %.0f km.\n",
           carros[maisEconomico], menorLitros, distancia);

    return 0;
     //Feito por Ruan de mello Vieira
}
