import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class Dragon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int n = sc.nextInt();
        int[][] dragons = new int[n][2];

        for (int i = 0; i < n; i++) {
            dragons[i][0] = sc.nextInt();
            dragons[i][1] = sc.nextInt();
        }

        Arrays.sort(dragons, Comparator.comparingInt(dragon -> dragon[0]));

        boolean canDefeatAll = true;

        for (int i = 0; i < n; i++) {
            if (s > dragons[i][0]) {
                s += dragons[i][1];
            } else {
                canDefeatAll = false;
                break;
            }
        }

        if (canDefeatAll) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close();
    }
}
