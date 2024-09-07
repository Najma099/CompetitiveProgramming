import java.util.*;

public class Qq3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        StringBuilder res = new StringBuilder();

        for (int i = 0; i < t; i++) {
            long x = sc.nextLong();
            long y = sc.nextLong();
            long k = sc.nextLong();

            long mx = (x + k - 1) / k;
            long my = (y + k - 1) / k;
            long m = Math.max(mx, my);

            long moves = 2 * m - (mx == my ? 0 : 1);
            res.append(moves).append("\n");
        }
        System.out.println(res);
    }
}
