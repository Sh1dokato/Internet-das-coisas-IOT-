#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, taxa;
    int inicioano, finalano;

    salario = 1000;      
    inicioano = 2020;  
	taxa = 0.015;      

    printf("Em que ano estamos: ");
    scanf("%d", &finalano);

    while (inicioano != finalano) {
        salario = salario + (salario * taxa); 
        taxa = taxa * 2;                       
        inicioano++;
    }
    printf("O seu salário atual é de R$ %.2f\n", salario);
}
