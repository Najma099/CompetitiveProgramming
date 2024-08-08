import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class showering {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int s = sc.nextInt();
            int m = sc.nextInt();
            
            int[][] ts = new int[n][2];
            for (int j = 0; j < n; j++) {
                ts[j][0] = sc.nextInt();
                ts[j][1] = sc.nextInt();
            }
            
            Arrays.sort(ts, Comparator.comparingInt(a -> a[0]));
            
            boolean canShower = false;

            if (ts[0][0] >= s) {
                canShower = true;
            }

            for (int j = 1; j < n && !canShower; j++) {
                if (ts[j][0] - ts[j - 1][1] >= s) {
                    canShower = true;
                }
            }

            if (m - ts[n - 1][1] >= s) {
                canShower = true;
            }

            System.out.println(canShower ? "YES" : "NO");
        }
        
        sc.close();
    }
}
