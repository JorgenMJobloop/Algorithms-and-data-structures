def quick_sort(arr: list) -> int:
    if len(arr) <= 1:
        return arr
    pivot = arr[-1]
    smaller = []
    equal = []
    larger = []

    for n in arr:
        if n < pivot:
            smaller.append(n)
        elif n == pivot:
            equal.append(n)
        else:
            larger.append(n)
    return quick_sort(smaller) + equal + quick_sort(larger)


arr = [
    1,
    4,
    3,
    2,
    9,
    12,
    14,
    18,
    22,
    69,
    32,
    31,
    256,
    128,
    1022,
    2200,
    4440,
    8880,
    14440,
]
sorted_array = quick_sort(arr)
print(sorted_array)

"""
    DOCUMENTATION

"""


"""

    The quick_sort function is defined to take an array arr as input.

    The base case checks if the length of the array is 1 or less (len(arr) <= 1). If the condition is satisfied, the array is already considered sorted, and it is returned as is.

    The pivot element is chosen as the last element of the array (pivot = arr[-1]).

    Three empty lists (smaller, equal, and larger) are created to hold the elements smaller than the pivot, equal to the pivot, and larger than the pivot, respectively.

    The elements of the array are iterated through in the for loop. Each element is compared with the pivot, and based on the comparison, it is placed in the appropriate list.

    The function then recursively calls quick_sort on the smaller and larger sub-arrays, and the equal elements are concatenated in between.

    The sorted sub-arrays are combined (quick_sort(smaller) + equal + quick_sort(larger)) to form the final sorted array.

    An example array arr is provided, and the quick_sort function is called with this array. The sorted array is stored in sorted_array and printed.
"""
