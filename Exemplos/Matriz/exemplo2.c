        #include <stdio.h>
        #include <locale.h>
        int main() {
            setlocale(LC_ALL, "Portuguese");
            int x [3][4];
            int i, j;

            for(i=0; i<3; i++){
                printf("numeros da linha %d", i);
                for (j = 0; j<4; j++){
                    printf("%0.2f | ", x[i][j]);
                }
                printf("\n");
            }
        }