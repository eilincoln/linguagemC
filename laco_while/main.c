#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;

    contador = 0; // preciso iniciar o contador fora da estrutura

    while (contador <= 100) { // condicao
        printf("%d\n", contador);
        contador++; // incremento da condicao
    }

    return 0;
}
