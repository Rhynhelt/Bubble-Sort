#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSortIndexer(int arr[], int n){
    int i, j,temp;
    int swap = 0;

    printArray(arr, n);

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }

        printf("Iteration #%d: %d\n", i+1, swap);
        swap = 0;

    }
    printArray(arr, n);
}

int main (){

    int array[] = {97,  16, 45,  63,  13,  22,  7,  58,  72};

    bubbleSortIndexer(array, 9);

    return 0;
}