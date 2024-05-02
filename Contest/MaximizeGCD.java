import java.util.Scanner;
 
public class MaximizeGCD {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); 
 
        for (int i = 0; i < t; i++) {
            int x = scanner.nextInt(); 
            int y = x - 1; 
            System.out.println(y);
        }
 
        scanner.close();
    }
}