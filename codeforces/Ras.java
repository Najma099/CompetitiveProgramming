import java.util.Scanner;

public class Ras {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int len = sc.nextInt();
            int K = sc.nextInt();
            int[] arr = new int[len];
            long prod = 1;
            for (int i = 0; i < len; i++) {
                arr[i] = sc.nextInt();
                prod = (prod * arr[i]) % K;
            }

            if (prod == 0) {
                System.out.println(0);
                continue;
            }

            int min = K;
            for (int i = 0; i < len; i++) {
                int rem = arr[i] % K;
                if (rem != 0) {
                    int adjustment = K - rem;
                    min = Math.min(min, adjustment);
                }
            }

            System.out.println(min);
        }
        sc.close();
    }
}
