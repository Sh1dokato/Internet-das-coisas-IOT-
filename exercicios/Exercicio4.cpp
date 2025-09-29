#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int polegadas, pes, jardas, milhas;
    
    printf("\nDigite uma medida em pés: ");
    scanf("%d", &pes);

    // Cálculos
    polegadas = pes * 12;
    jardas = pes * 3;
    milhas = jardas * 1760;

    // Impressão dos resultados
    printf("A quantidade de polegadas em outras unidades é: %d\n", polegadas);
    printf("A quantidade de jardas em outras unidades é: %d\n", jardas);
    printf("A quantidade de milhas em outras unidades é: %d\n", milhas);

    return 0;
}
