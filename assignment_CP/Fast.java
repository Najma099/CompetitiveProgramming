import java.util.Arrays;
import java.util.Scanner;

public class Fast {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int Q = sc.nextInt();
        for (int q = 0; q < Q; q++) {
            int lowerBound = sc.nextInt();
            int upperBound = sc.nextInt();
            
            
            int leftIndex = lowerBound(arr, lowerBound);
            int rightIndex = upperBound(arr, upperBound);

            
            int count = rightIndex - leftIndex;
            System.out.print(count + " ");
        }
        sc.close();
    }

    // Find the first index where arr[index] >= value
    private static int lowerBound(int[] arr, int value) {
        int left = 0;
        int right = arr.length;
        while (left < right) {
            int middle = (left + right) / 2;
            if (arr[middle] < value) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
        return left;
    }

    // Find the first index where arr[index] > value
    private static int upperBound(int[] arr, int value) {
        int left = 0;
        int right = arr.length;
        while (left < right) {
            int middle = (left + right) / 2;
            if (arr[middle] <= value) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
        return left;
    }
}


