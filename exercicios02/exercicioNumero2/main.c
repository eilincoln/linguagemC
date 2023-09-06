#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    int nota1, nota2, nota3, nota4 = 0;
    int media = 0;

    printf("digite o nome do aluno: ");
    gets(nome);

    printf("digite a nota 1: ");
    scanf("%d", &nota1);
    printf("digite a nota 2: ");
    scanf("%d", &nota2);
    printf("digite a nota 3: ");
    scanf("%d", &nota3);
    printf("digite a nota 4: ");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\n\n");
    printf("a media do aluno: %s eh de: %d\n", nome, media);

    if(media >= 6) {
        printf("O aluno(a), foi APROVADO");
    } else {
        printf("O aluno(a), foi REPROVADO");
    }




    return 0;
}
