#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

const long max_sized_integer =
    2147483647;

int main()
{
    // assign a pointer to the newArray as a NULL ptr
    int *newArray = NULL;
    // variable that hold the array size of newArray
    int arraySize;

    printf("Input array size: ");
    scanf("%d", &arraySize);

    int r = rand();

    // allocating memory to newArray
    newArray = (int *)malloc(arraySize * sizeof(int));
    // basic NULL check, to see that the Array is NOT NULL, if it is NULL, we crash the program and return error code 1
    if (newArray == NULL || sizeof(newArray) >= max_sized_integer)
    {
        printf("Error! Exiting..");
        exit(1);
        // return 1;
    }
    // basic test using rand() to populate the array with random numbers rather than incrementing numbers
    printf("Testing a implementation of rand() to populate a new array of size n, that is randomized, rather than sorted in ascending order.\n");
    // Populate the array with values
    for (int i = 0; i < arraySize; i++)
    {
        // random value order
        // newArray[i] = (i * r) * 2;
        // sorted order
        newArray[i] = i * 2;
    }

    // test wether or not the input array is already sorted before running the quicksort function

    // unsorted.out verify that the array is in fact sorted in ascending order without calling the quicksort method
    // however, this would not apply in cases where we would *not* automatically generate a new array based on size
    // but rather, accessed a already sized and unsorted array of n size

    // Perform quick sort on the array
    quickSort(newArray, 0, arraySize - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    // print the memory address of the pointer

    // for (int j = 0; j < arraySize; j++)
    // {
    //     printf("%p", &newArray[j]);
    // }
    // pointer to newArray;

    // printf("%p", &newArray);

    // Free the dynamically allocated memory
    free(newArray);

    return 0;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
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
