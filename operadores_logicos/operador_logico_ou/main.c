#include <stdio.h>
#include <stdlib.h>

/*
    Fa�a um programa que leia o c�digo de g�nero de uma pessoa

    0 - masculino
    1 - feminino

    se n�o for nenhum desse o codigo � inv�lido

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
