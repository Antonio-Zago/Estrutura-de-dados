#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vetor[], int n) {
    int i, j, menor, temporaria;

    // Loop para percorrer todo o array
    for (i = 0; i < n-1; i++) {
        // Encontrar o índice do menor elemento no subarray não ordenado
        menor = i;
        for (j = i+1; j < n; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        // Trocar o elemento atual com o menor elemento encontrado
        temporaria = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temporaria;
    }
}

int main() {
    int vetor[] = {64, 25, 12, 22, 11};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    int i;

    printf("Array original:\n");
    for (i=0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    selectionSort(vetor, n);

    printf("Array ordenado em ordem crescente:\n");
    for (i=0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}
