import java.util.*;

public class Twins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int total = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            total += arr[i];
        }

        Arrays.sort(arr);

        int sum = 0;
        int count = 0;
        int halfTotal = total / 2;

        for (int i = n - 1; i >= 0; i--) {
            sum += arr[i];
            count++;
            if (sum > halfTotal) {
                break;
            }
        }

        System.out.println(count);
        sc.close();
    }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                