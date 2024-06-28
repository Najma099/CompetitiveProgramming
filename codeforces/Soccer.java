import java.util.Scanner;

public class Soccer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); 

        for (int i = 0; i < t; i++) {
            int x1 = scanner.nextInt(); 
            int y1 = scanner.nextInt(); 
            int x2 = scanner.nextInt(); 
            int y2 = scanner.nextInt(); 

            
            if ((x1 > y1 && x2 > y2) || (y1 > x1 && y2 > x2)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }
}
