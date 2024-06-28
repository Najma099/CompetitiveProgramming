import java.util.*;

public class CoinTossGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        List<int[]> results = new ArrayList<>();
        
        for (int c = a; c <= x; c++) {
            for (int d = b; d <= y; d++) {
                if (c > d) {
                    results.add(new int[]{c, d});
                }
            }
        }
        
        
        results.sort((r1, r2) -> {
            if (r1[0] != r2[0]) {
                return Integer.compare(r1[0], r2[0]);
            } else {
                return Integer.compare(r1[1], r2[1]);
            }
        });
        
        System.out.println(results.size());
        for (int[] result : results) {
            System.out.println(result[0] + " " + result[1]);
        }
        
        scanner.close();
    }
}
