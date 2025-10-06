#include <stdio.h>

void maiorEmenor() {
    int n, maior, menor;
    for (int i = 1; i <= 4; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
        if (i == 1) {
            maior = menor = n;
        } else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }
    }
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
}
int main() {
    maiorEmenor();
    return 0;
}
