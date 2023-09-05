#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometragem_inicial = 0;
    int quilometragem_final = 0;
    int distancia_percorrida = 0;

    printf("digite a quilometragem INICIAL: ");
    scanf("%d", &quilometragem_inicial);
    printf("digite a quilometragem FINAL: ");
    scanf("%d", &quilometragem_final);

    distancia_percorrida = quilometragem_final - quilometragem_inicial;

    printf("a distancia percorrida eh de: %d", distancia_percorrida);

    return 0;
}
