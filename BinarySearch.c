#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

const int MAX_SIZE = INT_MAX;

// This struct acts as a "generic" built-in length type, usually seen in higher level languages like Java, C#, JS etc
typedef struct
{
    int arr[150]; // Max len 150
    size_t len;
} ArrayLength;

int binary_search(int arr[], int x)
{
    int left = 0;
    const int length = 10; // This might not have to be a const, as we can use the ArrayLength struct.
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

/// @brief
/// @param arr int array of size MAX_LENGTH
/// @param length length of a given array of size MAX_LENGTH where MAX_LENGTH = MAX_INT
void calculate_length(int arr[], size_t length)
{
    if (length == MAX_SIZE)
    {
        fprintf("The length of the array exceeded the maximum allowed size!\nTerminating program.", stdout);
        exit(EXIT_FAILURE);
        // Removed return statement called in void function, and rather call upon exit() with the proper exit code.
    }
    printf("Length of the array: %zu\n", length);
}

void test_implementation()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Input the number you wish to search for: \n");
    int x;
    int val = scanf("%d", &x);
    printf("Value of x currently: %d\n", x);
    int output = binary_search(arr, x);
    printf("Output: %d\n", output);
    if (output == -1)
    {
        printf("The algorithm did not locate the value of x. And thus failed!\n");
    }
    else
    {
        printf("The algorithm found x at: %d at position: %d\n", x, arr[x]);
    }

    printf("Verifying if the length is properly calculated!\n");
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // len 10
    size_t len = sizeof(array) / sizeof(array[0]);
    calculate_length(array, len);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;

    test_implementation();

    if (binary_search(arr, x) == -1)
    {
        printf("The algorithm did not locate the x value. And thus failed!\n");
    }
    else
    {
        printf("Algorithm found x at: %d\n", x);
    }
    return 0;
}
