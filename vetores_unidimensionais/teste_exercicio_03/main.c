#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia dois vetores A e B com 20 elementos num�ricos inteiros cada.
    Construir um vetor C sendo a jun��o dos dois outros vetores. O vetor C dever� ter o dobro
    de elementos. O vetor C ter� nos seus 20 primeiros elementos o conte�do do vetor A, e os
    �ltimos 20 elementos o conte�do do vetor B.

*/

int main()
{
    int vetorA[5], vetorB[5], vetorC[10];
    int i;

    //Lendo os valores de A
    for(i = 0; i < 5; i++) {
        printf("digite o %d valor para A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }


    //lendo os valores de B
    for(i = 0; i < 5; i++){
        printf("digite o %d valor para B: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    //contruindo o vetor C
    for(i = 0; i < 10; i++){
        vetorC[i] = vetorA[i];
        vetorC[i + 5] = vetorB[i];
    }

    //mostrando os valores do vetor C
    for(i = 0; i < 10; i++){
        printf("valor na posicao %d eh: %d\n",i + 1, vetorC[i]);
    }


    printf("Hello world!\n");
    return 0;
}
