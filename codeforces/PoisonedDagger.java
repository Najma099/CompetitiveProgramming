import java.util.Scanner;

public class PoisonedDagger {
    public static boolean check(long[] arr, long K, long mid, int n, long h) {
        long count = 0L;
        for(int i = 0; i < n - 1; i++) {
            if (arr[i] + mid >= arr[i + 1]) {
                count += arr[i + 1] - arr[i];
            } else {
                count += mid;
            }
        }
        count += mid; 
        return count >= h;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            
            int n = sc.nextInt();
            long h = sc.nextLong();
            long[] arr = new long[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
            }

            long low = 0;
            long high = (long) 1e18; 
            long ans = high;

            while (low <= high) {
                long mid = (low + high) / 2;
                if (check(arr, h, mid, n, h)) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
