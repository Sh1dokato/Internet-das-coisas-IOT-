#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], i, numero = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++) {
        if(vetor[i] > 50) {
            printf("Numero %d na posicao %d\n", vetor[i], i);
            numero = 1;
        }
    }
    if(numero == 0) {
        printf("Nenhum numero maior que 50\n");
    }
    return 0;
    //Feito por Ruan de mello Vieira
}
