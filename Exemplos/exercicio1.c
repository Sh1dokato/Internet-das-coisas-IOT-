#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario = 1000;
    float percentual = 1.5;
    int ano;

    for (ano = 2018; ano <= 2025; ano++) {
        printf("Ano %d = Salario = %.2f\n", ano, salario);
        salario = salario + (salario * percentual / 100);
        percentual = percentual * 2;
    }

    return 0;
}
