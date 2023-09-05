#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3, nota4, nota5;
    float media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    printf("Digite a quinta nota: ");
    scanf("%f", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5.0;

    printf("Nome do aluno: %s\n", nome);
    printf("Media do aluno: %.2f\n", media);

    return 0;
}
