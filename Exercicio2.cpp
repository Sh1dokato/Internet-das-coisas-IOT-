#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario_base, salario_total, imposto, gratificacao;
	
	printf("\nDigite o salario do funcionario: ");
	
	scanf("%f%*c", &salario_base);
	imposto = salario_base*0.7;
	gratificacao = 1.5;
	salario_total = (salario_base * gratificacao) - imposto;
	
	printf("O salário total od funcionario é de: R$ %.2f\n", salario_total);
	return 0;
}
