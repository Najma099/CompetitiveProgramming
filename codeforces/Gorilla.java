import java.util.Scanner;

public class Gorilla {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();
            
            for(int i = n; i >= k; i--) {
                System.out.print(i + " ");
            }
            for(int i = m+1; i < k; i++) {
                System.out.print(i + " ");
            }
            for(int i = 1; i <= m ;i++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
