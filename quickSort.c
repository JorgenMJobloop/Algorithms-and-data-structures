#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *newArray = NULL;
    int arraySize;
    int pivot = newArray[0] - 1;
    int small[] = {};
    int equal[] = {};
    int large[] = {};
    printf("Input array size: ");
    scanf("%d", arraySize);
    newArray = (int *)malloc(arraySize * sizeof(int));
    if (newArray == NULL)
    {
        printf("Error! Exiting..");
        return 1;
    }
    // Allocate the memory of the new array & the pivot.
    for (int i = 0; i < newArray; i++)
    {
        newArray[i] = i * pivot;
    }
    return 0;

    // implement the quick sort algorithm.
    for (int j = 0; j < pivot; j++)
    {
        if (j < pivot)
        {
            small[0] += j;
        }
        else if (j == pivot)
        {
            equal[0] += j;
        }
        else
        {
            large[0] += j;
        }
        return 0;
    }
    return 0;
}

// bad implementation.