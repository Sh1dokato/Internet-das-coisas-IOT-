    #include <stdio.h>

    int main(){
        int vetor[10];
        int i, j, contador;
        for (i = 0; i < 10; i++){
            printf("Digite o %d numero: ", i + 1);
            scanf("%d", &vetor[i]);
        }
        for (i = 0; i < 10; i++){
            contador = 0;

            for(j = 1; j <= vetor[i]; j++){
                if (vetor[i] % j == 0){
                    contador++;
                }
            }
            if (contador == 2){
                printf("O numero %d é primo e esta na posição %d\n", vetor[i], i);
            }
            else{
                printf("O numero não é primo\n");
            }
        }
    }