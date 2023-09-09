#include <stdio.h>
#include <stdlib.h>

/*
    fa�a um programa que digite numeros at� que o usu�rio digite 0

    no final do programa apresente:
    => a somat�ria dos numeros positivos
    => a media dos numeros negativos

*/

int main()
{
    int numero, somaPos, somaNeg, contNeg, media;

    numero = 1;
    somaPos = somaNeg = contNeg = 0;

    while(numero != 0) {
        printf("digite um numero: ");
        scanf("%d", &numero);

        if(numero >= 0) {
            somaPos = somaPos + numero;
        } else {
            somaNeg = somaNeg + numero;
            contNeg++;
        }
    }

    media = somaNeg / contNeg;

    printf("soma dos positivos: %d\n", somaPos);
    printf("media dos negativos: %d\n", media);
    return 0;
}
