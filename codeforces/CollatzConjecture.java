import java.util.Scanner;

public class CollatzConjecture {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        for (int i = 0; i < t; i++) {
            long x = scanner.nextLong();
            long y = scanner.nextLong();
            long k = scanner.nextLong();
            
            long countDivisions = 0;
            long tempX = x;
            while (tempX % y == 0 && countDivisions < k) {
                tempX /= y;
                countDivisions++;
            }
            
            x += k;
            if (countDivisions > 0) {
                x /= Math.pow(y, countDivisions);
            }
            
            System.out.println(x);
        }
        
        scanner.close();
    }
}
