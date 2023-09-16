#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de vetores
    float notas[6];
    int contador;

    // lendo dados de um vetor
    for(contador = 0; contador < 6; contador++){
        printf("digite uma nota: ");
        scanf("%f", &notas[contador]);
    }


    // mostrando dados de um vetor
     for(contador = 0; contador < 6; contador++){
        printf("a nota foi: %.2f \n", notas[contador]);

    }

    printf("Hello world!\n");
    return 0;
}
