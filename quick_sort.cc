#include <iostream>
#include <vector>

void quickSort(std::vector<int>& arr, int low, int high);
int partition(std::vector<int>& arr, int low, int high);

int main() {
    int arraySize;

    std::cout << "Input array size: ";
    std::cin >> arraySize;

    std::vector<int> newArray(arraySize);

    for(int i = 0; i < arraySize; i++) {
        newArray[i] = i * 2;
    }

    quickSort(newArray, 0, arraySize - 1);

    // Skriv ut den sorterte arrayen
    std::cout << "Sorted array: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);

    return (i + 1);
}

