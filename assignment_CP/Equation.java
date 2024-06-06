import java.util.Scanner;

public class Equation {
    public static boolean check(double x, double c) {
        return (x * x + Math.sqrt(x)) >= c;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double c = sc.nextDouble();
        double l = 0;
        double h = 1e10;
        double ans = 0;

        for (int i = 0; i < 100; i++) { // 100 iterations to ensure precision
            double mid = (l + h) / 2;
            if (check(mid, c)) {
                ans = mid;
                h = mid;
            } else {
                l = mid;
            }
        }

        System.out.printf("%.6f%n", ans);
        sc.close();
    }
}
