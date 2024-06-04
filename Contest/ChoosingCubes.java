import java.util.Scanner;
import java.util.Arrays;

public class ChoosingCubes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int f = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            int fv = a[f - 1];
            Arrays.sort(a);
            for (int i = 0; i < n / 2; i++) {
                int tmp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = tmp;
            }

            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == fv) {
                    cnt++;
                }
            }

            int ps = 0;
            int pe = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == fv) {
                    ps = i + 1;
                    break;
                }
            }

            pe = ps + cnt - 1;

            if (pe <= k) {
                System.out.println("YES");
            } else if (ps > k) {
                System.out.println("NO");
            } else {
                System.out.println("MAYBE");
            }
        }
        sc.close();
    }
}
