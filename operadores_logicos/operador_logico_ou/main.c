#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que leia o código de gênero de uma pessoa

    0 - masculino
    1 - feminino

    se não for nenhum desse o codigo é inválido

*/


int main()
{
    int codigo;

    printf("digite o codigo: ");
    scanf("%d", &codigo);

    if(codigo == 0 || codigo == 1){
        printf("codigo valido\n");
    } else {
        printf("codigo invalido\n");
    }

    printf("Hello world!\n");
    return 0;
}
