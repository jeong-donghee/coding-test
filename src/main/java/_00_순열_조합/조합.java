package _00_순열_조합;

import java.util.ArrayList;
import java.util.List;

public class 조합 {

    private static List<Integer> arr = List.of(1, 2, 3, 4, 5);

    public static void main(String[] args) {
        // 1. 중첩 반복문으로 구현
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < i; j++) {
                for (int k = 0; k < j; k++) {
                    System.out.println(arr.get(i) + " " + arr.get(j) + " " + arr.get(k));
                }
            }
        }

        System.out.println("-----------------");

        // 2. 재귀로 구현
        List<Integer> result = new ArrayList<>();
        combi(3, 0, result);
    }

    private static void combi(int r, int depth, List<Integer> result) {
        if (result.size() == r) {
            System.out.println(result);
            return;
        }

        for (int i = depth; i < arr.size(); i++) {
            result.add(arr.get(i));
            combi(r, i + 1, result);
            result.remove(result.size() - 1);
        }
    }
}
