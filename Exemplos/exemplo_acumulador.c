#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, soma, num;
    soma = 0; // inicialização da variavel SOMA com o valor zero
        for (i = 1; i <=5; i++)
        {
            printf("Digite um numero");
            scanf("%d%*c", &num);
            soma = soma + num; // acumulando o valor  da variavel NUM na variavel SOMA
        }
        printf("Soma = %d", soma);
}