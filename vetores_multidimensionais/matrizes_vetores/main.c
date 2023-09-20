#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração do vetor
    float notas [5][6]; //aqui são 5 alunos e 6 notas
    int i, j; // declaração dos index
    float media;

    // lendo os dados para matriz
    for(i = 0; i < 5; i++) { //neste for eu leio os dados de caga aluno
        for(j = 0; j < 6; j++){ //neste for eu leio os dados das notas
            printf("digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    //mostrando as notas dos alunos
    for(i = 0; i < 5; i++) { //neste for eu leio os dados de caga aluno
        for(j = 0; j < 6; j++){ //neste for eu leio os dados das notas
            printf("a nota %d do aluno %d foi: %.2f\n", j + 1, i + 1, notas[i][j]);
            media = media + notas[i][j];
        }
        media = media / 6;
        printf("a media do aluno foi: %.2f\n\n\n", media);
    }
    printf("Hello world!\n");
    return 0;
}
