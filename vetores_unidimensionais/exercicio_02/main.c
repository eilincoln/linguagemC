#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[2], vetorB[2], somaVetorC[2];
    int i;

    for(i = 0; i < 2; i++){
        printf("digite o valor %d para o vetor A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for(i = 0; i < 2; i++){
        printf("digite o valor %d para o vetor B: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for(i = 0; i < 2; i++){
        somaVetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i = 0; i < 2; i++){
        printf("%d + %d = %d\n", vetorA[i], vetorB[i], somaVetorC[i]);
    }


    printf("Hello world!\n");
    return 0;
}
