#include <stdio.h>
#define TAM 5

void lerDados(char sexo[], char olhos[], char cabelo[], int idade[]) {
    for (int i = 0; i < TAM; i++) {
        printf("\nHabitante %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Cor dos olhos (A=azuis, C=castanhos): ");
        scanf(" %c", &olhos[i]);
        printf("Cor do cabelo (L=louros, P=pretos, C=castanhos): ");
        scanf(" %c", &cabelo[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }
}
float mediaIdadeCastanhosPretos(char olhos[], char cabelo[], int idade[]) {
    int soma = 0, cont = 0;
    for (int i = 0; i < TAM; i++) {
        if (olhos[i] == 'C' && cabelo[i] == 'P') {
            soma += idade[i];
            cont++;
        }
    }
    if (cont == 0) return 0;
    return (float)soma / cont;
}
int maiorIdade(int idade[]) {
    int maior = idade[0];
    for (int i = 1; i < TAM; i++) {
        if (idade[i] > maior)
            maior = idade[i];
    }
    return maior;
}
int mulheresAzuisLouros(char sexo[], char olhos[], char cabelo[], int idade[]) {
    int cont = 0;
    for (int i = 0; i < TAM; i++) {
        if (sexo[i] == 'F' && idade[i] >= 18 && idade[i] <= 35 &&
            olhos[i] == 'A' && cabelo[i] == 'L') {
            cont++;
        }
    }
    return cont;
}
int main() {
    char sexo[TAM], olhos[TAM], cabelo[TAM];
    int idade[TAM];
    lerDados(sexo, olhos, cabelo, idade);
    printf("\nMédia de idade (olhos castanhos e cabelos pretos): %.2f\n",
           mediaIdadeCastanhosPretos(olhos, cabelo, idade));
    printf("Maior idade entre os habitantes: %d\n", maiorIdade(idade));
    printf("Mulheres entre 18 e 35 anos com olhos azuis e cabelos louros: %d\n",
           mulheresAzuisLouros(sexo, olhos, cabelo, idade));
    return 0;
}
