#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float deposito, taxa, deposito_total, rendimento_parcial;

    // Entrada de dados
    printf("\nDigite o depósito do funcionário: ");
    scanf("%f", &deposito); 
    printf("\nDigite a taxa (em porcentagem): ");
    scanf("%f", &taxa); 

    
	// Convertendo a taxa para decimal (ex: 10% -> 0.10)
    taxa = taxa / 100;  
	// Calculando o valor total (deposito + rendimento)
    deposito_total = deposito + deposito * taxa;  
	// Calculando o rendimento (depósito * taxa)
    rendimento_parcial = deposito * taxa; 

	// Exibe o rendimento
    printf("O rendimento do funcionário foi de: R$ %.2f\n", rendimento_parcial);  
	// Exibe o valor total
    printf("\nO rendimento total do funcionário é de: R$ %.2f\n", deposito_total);  

    return 0;
}
