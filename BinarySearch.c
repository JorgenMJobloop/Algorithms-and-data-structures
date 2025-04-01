#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(int arr[], int x)
{
    int left = 0;
    int length = 10;
    int right = length - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (arr[middle] == x)
        {
            return middle;
        }
        if (arr[middle] < x)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;
    if (
        binary_search(arr, x) == -1)
    {
        printf("The algorithm did not locate the x value. And thus failed!\n");
    }
    else
    {
        printf("Algorithm found x");
    }
    return 0;
}
