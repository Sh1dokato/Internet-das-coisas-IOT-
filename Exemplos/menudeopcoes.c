#include <stdio.h>

int main() {
    int opcao;
    float salario; // salário pode ter centavos

    printf("Qual das opções você escolhe:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo salario\n");
    printf("3 - Classificação\n");
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if (salario < 500) {
                printf("Você deve 5%% ao governo\n");
            } else if (salario >= 500 && salario < 850) {
                printf("Você deve 10%% ao governo\n");
            } else { // salario >= 850
                printf("Você deve 15%% ao governo\n");
            }
            break;

        case 2:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if (salario > 1500) {
                printf("Novo salário: %.2f\n", salario + 25);
            } else {
                printf("Novo salário: %.2f\n", salario + 50);
            }
            break;

        case 3:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if (salario <= 700) {
                printf("Classificação: Mal remunerado\n");
            } else {
                printf("Classificação: Bem remunerado\n");
            }
            break;

        default:
            printf("Você não selecionou uma opção\n");
            break;
    }

    return 0;
}
