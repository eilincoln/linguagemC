#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, contador = 0;

    for(contador = 0; contador <= 100; contador++) {
        soma = soma + contador;
    }

    printf("somatoria: %d", soma);
    return 0;
}
