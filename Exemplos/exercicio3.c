#include <stdio.h>

int main() {
    int n, idade;
    char sexo;
    int total_fem = 0, total_masc = 0;
    int mortes_fem = 0, mortes_masc = 0;
    int mortes_24meses = 0;

    printf("Digite o número de crianças nascidas no período: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nDigite o sexo da %dª criança (m/f): ", i);
        scanf(" %c", &sexo);
        printf("Digite o tempo de vida (em meses) da %dª criança: ", i);
        scanf("%d", &idade);

        // Contagem por sexo
        if (sexo == 'f' || sexo == 'F') {
            total_fem++;
            if (idade == 0) mortes_fem++; 
        } else if (sexo == 'm' || sexo == 'M') {
            total_masc++;
            if (idade == 0) mortes_masc++;
        }

        if (idade <= 24) mortes_24meses++;
    }

    double perc_fem = total_fem > 0 ? (mortes_fem * 100.0 / total_fem) : 0;
    double perc_masc = total_masc > 0 ? (mortes_masc * 100.0 / total_masc) : 0;
    double perc_24meses = n > 0 ? (mortes_24meses * 100.0 / n) : 0;

    printf("\nPercentual de crianças do sexo feminino mortas: %.2lf\n", perc_fem);
    printf("Percentual de crianças do sexo masculino mortas: %.2lf\n", perc_masc);
    printf("Percentual de crianças com 24 meses ou menos mortas no período: %.2lf\n", perc_24meses);

    return 0;
}
