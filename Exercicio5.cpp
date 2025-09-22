#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma;
    
    printf("Digite quatro numeros inteiros: ");
    // Ler os quatro números inteiros
    scanf("%d", &num1);
 	scanf("%d", &num2);
 	scanf("%d", &num3);
 	scanf("%d", &num4);
 	
    soma = num1 + num2 + num3 + num4;

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
