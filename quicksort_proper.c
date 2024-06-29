#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main() {
    int* newArray = NULL;
    int arraySize;

    printf("Input array size: ");
    scanf("%d", &arraySize);

    newArray = (int*)malloc(arraySize * sizeof(int));
    if(newArray == NULL) {
        printf("Error! Exiting..");
        return 1;
    }

    // Populate the array with values
    for(int i = 0; i < arraySize; i++) {
        newArray[i] = i * 2;
    }

    // Perform quick sort on the array
    quickSort(newArray, 0, arraySize - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(newArray);

    return 0;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}
