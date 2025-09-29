#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, mediaAluno;
    int totalAlunos = 6;
    int aprovados = 0; 
    int reprovados = 0;
    int exame = 0;

    for (int i = 1; i <= totalAlunos; i++) {
        printf("\nAluno %d\n", i);
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);

        mediaAluno = (nota1 + nota2) / 2.0;
        printf("Média do aluno %d: %.2f\n", i, mediaAluno);

        if (mediaAluno < 3) {
            printf("Situação: reprovado\n");
            reprovados++;
        } else if (mediaAluno < 7) {
            printf("Situação: exame\n");
            exame++;
        } else {
            printf("Situação: aprovado\n");
            aprovados++;
        }
    }
    printf("Total de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos em exame: %d\n", exame);
    printf("Total de alunos reprovados: %d\n", reprovados);

    return 0;
}
