import java.util.Scanner;

public class KdistinctPoint {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int xc = scanner.nextInt();
            int yc = scanner.nextInt();
            int k = scanner.nextInt();
            
            // Output k distinct points
            for (int i = 0; i < k; i++) {
                System.out.println((xc + i) + " " + (yc + i));
            }
        }
        scanner.close();
    }
}

