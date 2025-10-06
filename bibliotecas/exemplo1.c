#include <stdio.h>
#include <string.h>
#include <locale.h>

void sub_rotina1(){
    printf("Mostrando uma mensagem");
}
void sub_rotina2(){
    int a,b,c;
    printf("Digite o valor de a: ");
    scanf("%d%*c", &a);
    printf("Digite o valor de b: ");
    scanf("%d%*c", &b);
    c = a - b;
    printf("Resultado = %d", c);
}
int sub_rotina3(int x, int y){
    int res;
    res = x * y;
    return res;
}
int main() {
    setlocale(LC_ALL, "Portuguese");

    sub_rotina1();  
    sub_rotina2();  

    int r = sub_rotina3(5, 3);
    printf("Resultado da sub_rotina3 = %d\n", r);

    return 0;
}