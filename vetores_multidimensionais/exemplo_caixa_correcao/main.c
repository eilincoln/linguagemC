#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração da matriz
    float caixa[3][6];
    int i, j;


    // lendo os dados da matriz
    // lendo as receitas
    i = 0;
    for(j = 0; j < 6; j++){
        printf("digite a receita do mes: %d: ", j + 1);
        scanf("%f", &caixa[i][j]);
    }

    //lendo as despesas
    i = 1;
    for(j = 0; j < 6; j++){
        printf("digite a despesa do mes: %d: ", j + 1);
        scanf("%f", &caixa[i][j]);
    }


    //mostrando as infos
    for(j = 0; j < 6; j++){
        printf("receita   do mes %d foi %.2f \n", j + 1, caixa[0][j]);
        printf("despesa   do mes %d foi %.2f \n", j + 1, caixa[1][j]);
        caixa[2][j] = caixa[0][j] - caixa[1][j];
        printf("Resultado do mes de %d foi %.2f \n", j + 1, caixa[2][j]);
    }


    printf("Hello world!\n");
    return 0;
}
