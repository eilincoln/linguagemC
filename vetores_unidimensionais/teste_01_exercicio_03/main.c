#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[20], vetorB[20], vetorC[40];
    int i;

    //lendo os valores para o vetor A
    printf("DIGITE OS VALORES PARA O VETOR A: ");
    for(i = 0; i < 20; i++){
        printf("valor %d: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    //lendo os valores para o vetor B
    printf("DIGITE OS VALORES PARA O VETOR B: ");
    for(i = 0; i < 20; i++){
        printf("valor %d: ", i+1);
        scanf("%d", &vetorB[i]);
    }

    //montando o vetor C
    for (i = 0; i < 20; i++) {
        vetorC[i] = vetorA[i];
        vetorC[i + 20] = vetorB[i];
    }

    //mostrando na tela
    printf("valores do vetor C");
    for(i = 0 ; i < 40 ; i++){
        printf("%d ", vetorC[i]);
    }



    printf("Hello world!\n");
    return 0;
}
