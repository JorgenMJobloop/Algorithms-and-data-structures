#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dynamicArray = NULL;
    int arraySize;

    // Read the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    // Allocate memory for the array
    dynamicArray = (int *)malloc(arraySize * sizeof(int));
    if (dynamicArray == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Populate the array with values
    for (int i = 0; i < arraySize; i++)
    {
        dynamicArray[i] = i * 2;
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Deallocate the dynamically allocated memory
    free(dynamicArray);

    return 0;
}