#include <stdio.h>

int main() {
    int vetorA[20], vetorB[20], vetorC[40];
    int i;

    // Leitura dos elementos do vetor A
    printf("Digite os 20 elementos do vetor A:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetorA[i]);
    }

    // Leitura dos elementos do vetor B
    printf("Digite os 20 elementos do vetor B:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetorB[i]);
    }

    // Construção do vetor C
    for (i = 0; i < 20; i++) {
        vetorC[i] = vetorA[i];
        vetorC[i + 20] = vetorB[i];
    }

    // Impressão do vetor C
    printf("Vetor C resultante:\n");
    for (i = 0; i < 40; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
