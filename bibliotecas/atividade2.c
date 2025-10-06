#include <stdio.h>

int soma(int a, int b) {
    int soma = 0;
    for (int i = a + 1; i < b; i++) {
        soma += i;
    }
    return soma;
}
int main() {
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    if (n1 < n2)
        printf("Soma dos números entre %d e %d = %d\n", n1, n2, soma(n1, n2));
    else
        printf("Soma dos números entre %d e %d = %d\n", n2, n1, soma(n2, n1));
    return 0;
}
