#include <stdio.h>

int main() {
    int num1, num2, num3, soma, media;
    
    printf("Digite três numeros inteiros: ");
    scanf("%d", &num1);
 	scanf("%d", &num2);
 	scanf("%d", &num3);
 	
    soma = num1 + num2 + num3;
	media = soma/3;

	printf("A média dos numeros digitados e: %d\n", media);
    return 0;
}
