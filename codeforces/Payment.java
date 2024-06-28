import java.util.Scanner;

public class Payment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int S = sc.nextInt();
            
            int ans = Math.min(S / n, a);
            int rem = S - (ans * n);
            
            if (rem <= b) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
        sc.close();
    }
}
