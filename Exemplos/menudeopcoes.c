#include <stdio.h>

int main() {
    int opcao;
    float salario, imposto; // imposto vai armazenar o valor calculado

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
                imposto = salario * 0.05;
                printf("Imposto de 5%% = R$ %.2f\n", imposto);
            } else if (salario >= 500 && salario < 850) {
                imposto = salario * 0.10;
                printf("Imposto de 10%% = R$ %.2f\n", imposto);
            } else { // salario >= 850
                imposto = salario * 0.15;
                printf("Imposto de 15%% = R$ %.2f\n", imposto);
            }
            break;

        case 2:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if (salario > 1500) {
                printf("Novo salário: R$ %.2f\n", salario + 25);
            } else {
                printf("Novo salário: R$ %.2f\n", salario + 50);
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
