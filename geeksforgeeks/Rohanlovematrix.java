
import java.util.Scanner;
public class Rohanlovematrix {
    public static long mod = 1000000007;  
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        long[][] a = { { 1, 1 }, { 1, 0 } };
        long[][] fiboo = pow(a, N);
        System.out.println(fiboo[1][0]);
        sc.close();
    }

    public static long[][] pow(long[][] a, int N) {
        if (N == 0)
            return new long[][] { { 1, 0 }, { 0, 1 } };
        if (N == 1)
            return a;
        long[][] ans = pow(a, N / 2);
        if (N % 2 == 1) {
            long[][] temp = multiply(ans, ans);
            return multiply(temp, a);
        } else
            return multiply(ans, ans);
    }

    public static long[][] multiply(long[][] a, long[][] b) {
        long[][] result = new long[a.length][b[0].length];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < b[0].length; j++) {
                long sum = 0;
                for (int r = 0; r < a[0].length; r++) {
                    sum = (sum + ((a[i][r] % mod) * (b[r][j] % mod) % mod)) % mod;
                }
                result[i][j] = sum;
            }
        }
        return result;
    
    }
}

