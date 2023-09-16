#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];

    // sempre vou usar um for para poder ler dados e colocar dentro de um vetor, assim eu consigo percorrer dentro do vetor
    for(int i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Hello world!\n");
    return 0;
}
