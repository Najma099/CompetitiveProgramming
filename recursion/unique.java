import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class unique {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int T = 0; T < t; T++) {
            Map<Integer, Integer> mp = new HashMap<>();
            int count = 0;
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if (!mp.containsKey(arr[i])) {
                    mp.put(arr[i], 1);
                    count++;
                }
            }
            if (count == 2) {
                if (arr[n - 1] - arr[0] > 1) {
                    System.out.println("YES");
                } 
                else {
                    System.out.println("NO");
                }
            }
            else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
