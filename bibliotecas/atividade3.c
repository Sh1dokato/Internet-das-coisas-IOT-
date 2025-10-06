#include <stdio.h>

void converteTempo(int totalS, int *h, int *m, int *s) {
    *h = totalS / 3600;
    totalS %= 3600;
    *m = totalS / 60;
    *s = totalS % 60;
}
int main() {
    int segundos, horas, minutos, seg;
    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);
    converteTempo(segundos, &horas, &minutos, &seg);
    printf("%d segundos equivalem a %d hora(s), %d minuto(s) e %d segundo(s)\n", segundos, horas, minutos, seg);
    return 0;
}
