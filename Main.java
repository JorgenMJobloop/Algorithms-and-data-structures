public class Main {

    public static void main(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        int x = 10;
        System.out.println(binarySearchMethod(array, x));
    }

public static int binarySearchMethod(int[] array, int x) {
    int left = 0;
    int right = array.length - 1;
    
    while(left <= right) {
        int middle = left + (right - left) / 2;

        if(array[middle] == x) {
            return middle;
        }

        if(array[middle] < x) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    return -1;
}

}