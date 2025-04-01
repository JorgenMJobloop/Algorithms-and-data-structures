import java.lang.*;

public class Sequence {
    public static void main(String[] args) {
        String[] word = { "h", "e", "l", "l", "o" };
        String find = "o";
        Sequential(word, find);
    }

    public static void Sequential(String[] n, String letter) {
        boolean isFound = false;
        int i = 0;
        while (!isFound && i < n.length) {
            if (n[i] == letter) {
                isFound = true;
            } else {
                i++;
            }
        }
        if (isFound) {
            System.out.println("Letter found:" + letter);
        }
    }
}