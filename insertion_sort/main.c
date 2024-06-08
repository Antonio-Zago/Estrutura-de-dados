#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) {
    int i, j, aux;
    for (i = 0; i < n -1; i++) {
        if(arr[i] > arr[i+1]){
            // Realiza a troca
            aux = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = aux;
            j= i-1;

            while (j >= 0) {
                if(aux < arr[j]){
                    arr[j +1] = arr[j];
                    arr[j] = aux;
                }else{
                    break;
                }
                j = j-1;
            }
        }
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Array original: \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    insertionSort(arr, n);

    printf("Array ordenado: \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
