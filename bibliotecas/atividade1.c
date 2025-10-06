#include <stdio.h>

int verificaNumero(int n){
    if (n >= 0)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (verificaNumero(num))
        printf("O número é positivo.\n");
    else
        printf("O número é negativo.\n");
    return 0;
}
