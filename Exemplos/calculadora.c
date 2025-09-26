#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Adicao (+)\n");
    printf("2 - Subtracao (-)\n");
    printf("3 - Multiplicacao (*)\n");
    printf("4 - Divisao (/)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro! Divisao por zero nao e permitida.\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
//Ruan de Mello Vieira
