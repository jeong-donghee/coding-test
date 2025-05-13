package _00_순열_조합;

import java.util.ArrayList;
import java.util.List;

public class 순열 {

    private static ArrayList<Integer> arr = new ArrayList<>(List.of(1, 2, 3, 4, 5));

    public static void main(String[] args) {
        int n = 5;
        int r = 3;

        makePermutation(n, r, 0);
    }

    private static void makePermutation(int n, int r, int depth) {
        if (r == depth) {
            for (int i = 0; i < r; i++) {
                System.out.print(arr.get(i) + " ");
            }
            System.out.println();
            return;
        }

        for (int i = depth; i < n; i++) {
            int temp = arr.get(depth);
            arr.set(depth, arr.get(i));
            arr.set(i, temp);
            makePermutation(n, r, depth + 1);
            temp = arr.get(depth);
            arr.set(depth, arr.get(i));
            arr.set(i, temp);
        }
    }
}
