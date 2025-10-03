#include <stdio.h>

int main(){
    int M[2][2];
    int R[2][2];
    int i, j;
    int maior;

    for (i = 0; i <2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite o elemento da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
    maior = M[0][0];
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            if(M[i][j] > maior){
                maior = M[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            R[i][j] = M[i][j] * maior;
        }
    }
    printf("\n Matriz\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d", R[i][j]);
        }
        printf("\n");
    }
}
