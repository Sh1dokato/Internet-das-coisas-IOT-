#include <stdio.h>

int main() {
    int dia, mes;

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes do seu nascimento (1-12): ");
    scanf("%d", &mes);

    if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2))
        printf("Signo: Aquario\n");
        
    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3))
        printf("Signo: Peixes\n");
        
    else if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4))
        printf("Signo: Aries\n");
        
    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
        printf("Signo: Touro\n");
        
    else if ((dia >= 21 && mes == 5) || (dia <= 21 && mes == 6))
        printf("Signo: Gemeos\n");
    else if ((dia >= 22 && mes == 6) || (dia <= 22 && mes == 7))
        printf("Signo: Cancer\n");
        
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
        printf("Signo: Leao\n");
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
        printf("Signo: Virgem\n");
        
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
        printf("Signo: Libra\n");
        
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
        printf("Signo: Escorpiao\n");
        
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
        printf("Signo: Sagitario\n");
        
    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
        printf("Signo: Capricornio\n");
    else
        printf("Data invalida!\n");

    return 0;
}
