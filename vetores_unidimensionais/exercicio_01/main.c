#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarando as variaveis + vetor
    int vetor[10], soma, i;

    soma = 0;

    // recebendo dados dentro do vetor
    for(i = 0; i < 10; i++){
        printf("digite o %d numero para soma: ", i + 1);
        scanf("%d", &vetor[i]);

        soma = soma + vetor[i];
    }

    // mostrar o vetor:
    for(i = 0; i < 10; i++){
        printf("o elemento %d do vetor eh: %d\n", i + 1, vetor[i]);
    }


    printf("a soma do vetor eh: %d\", soma);

    return 0;
}
