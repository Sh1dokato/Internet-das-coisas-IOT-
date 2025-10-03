    #include <stdio.h>
    #include <locale.h>
    int main() {
        setlocale(LC_ALL, "Portuguese");
        int x[10][6];
        int i, j;
        for (i = 0; i < 7; i++){
            for (j=0;j<6;j++){
            printf("%d", x[i][j]);
            }
        }
    }