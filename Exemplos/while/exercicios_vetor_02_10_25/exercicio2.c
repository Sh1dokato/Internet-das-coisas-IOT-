#include <stdio.h>

int main() {
    char modelo[5][20]; 
    float consumo[5], litros, menorLitros, distancia = 1000;
    int i, maisEconomico = 0;


    for (i = 0; i < 5; i++) {
        printf("Digite o modelo do %d.o veiculo: ", i + 1);
        scanf("%s", modelo[i]);
        printf("Digite quantos kilometros por litro que o %s veiculo faz: ", modelo[i]);
        scanf("%f", &consumo[i]);
        litros = distancia / consumo[i];
        printf("O veiculo %s consome %.2f litro(s) de combustivel para percorrer 1000Km/s\n\n", modelo[i], litros);
    }

    menorLitros = distancia / consumo[0];
    maisEconomico = 0;
    for (i = 1; i < 5; i++) {
        litros = distancia / consumo[i];
        if (litros < menorLitros) {
            menorLitros = litros;
            maisEconomico = i;
        }
    }

    printf("O veiculo mais economico é o %s\n", modelo[maisEconomico]);

    return 0;
    // Feito por Ruan de Mello Vieira
}
