xx#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char nome[80]; // string

    printf("digite uma letra: ");
    scanf("%c", &letra);
    fflush(stdin); // aqui estou limpando o bufer do teclado
    printf("digite um nome: ");
    gets(nome);

    printf("letra digitada: %c \n", letra);
    printf("nome digitado: %s", nome);
    return 0;
}

/*
    aprender que cada linguagem tem suas
    particularidades

    e tomar bastante cuidado com isso=
*/
