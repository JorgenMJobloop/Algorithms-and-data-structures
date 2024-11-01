
//import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Random;

public class Main {

    public static void main(String[] args) {
        int[] array = { 1, 3, 9, 3, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                26,
                27, 28, 29, 30 };

        System.out.println("Current size of sorted array: " + array.length);

        int lenght = 85;
        int[] randomArray = createRandomIntegerArray(lenght);
        System.out.println("Current size of unsorted random array: " + randomArray.length);

        Arrays.sort(array);

        int x = 25;

        int y = 15;

        // System.out.println("Test the binary search implementation without sorting the
        // random array");

        Arrays.sort(randomArray);

        if (binarySearchMethod(randomArray, y) == -1) {
            System.out
                    .println("Binary search algorithm returns -1, we can deduce from this, that the algorithm failed!");
        }

        System.out.println(binarySearchMethod(array, x));

        System.out.println("x found at index: " + binarySearchMethod((array), x));

        System.out.println("x found in a random pool at index: " + binarySearchMethod(randomArray, y));

    }

    public static int binarySearchMethod(int[] array, int x) {
        int left = 0;
        int right = array.length - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (array[middle] == x) {
                return middle;
            }

            if (array[middle] < x) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }

        return -1;
    }

    public static int[] createRandomIntegerArray(int lenght) {
        if (lenght < 10 || lenght > 128) {
            throw new IllegalArgumentException("Error lenght cannot be less than 10 or greater than 128");
        }

        int[] randomArray = new int[lenght];
        // populate the array
        for (int i = 0; i < lenght; i++) {
            randomArray[i] = i;
        }

        Random random = new Random();

        for (int j = randomArray.length - 1; j > 0; j--) {
            int k = random.nextInt(j);
            int temp = randomArray[k];
            randomArray[j] = randomArray[k];
            randomArray[k] = temp;
        }
        return randomArray;
    }
}
