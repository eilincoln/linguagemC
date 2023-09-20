#include <stdio.h>
#include <stdlib.h>

int main()
{   //declaração da matriz
    float caixa[3][2];
    int i, j;


    //lendo dado da matriz


    i = 0; //aqui estou lendo as receitas
    for(j = 0; j < 2; j++){
        printf("digite a receita do mes %d: ", j + 1);
        scanf("%f", &caixa[i][j]);
    }

    i = 1; // lendo as despesas
    for(j = 0; j < 2; j++){
        printf("digite a despesa do mes %d", j + 1);
        scanf("%f", &caixa[i][j]);
    }


    printf("Hello world!\n");
    return 0;
}
