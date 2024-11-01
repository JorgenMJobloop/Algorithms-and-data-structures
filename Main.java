import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[] randArray = {};
        for (int i = 0; i < randArray.length; i++) {
            randArray[0] += i;
        }
        System.out.println(randArray);
        int[] array = { 1, 3, 9, 3, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                26,
                27, 28, 29, 30 };
        Arrays.sort(array);
        int x = 25;
        System.out.println(binarySearchMethod(array, x));
        System.out.println("x found at index: " + binarySearchMethod((array), x));
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
}
