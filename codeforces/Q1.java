import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            if(a == 0 && b == 0)
                System.out.println("YES");
            else if(a == 0) {
                if(b % 2 == 0)
                    System.out.println("YES");
                else 
                    System.out.println("NO");
            }
            else if(b == 0) {
                if(a % 2 == 0)
                    System.out.println("YES");
                else 
                    System.out.println("NO");
            }
            else {
                int sum = a + b*2;
                if(sum % 2 == 0)
                    System.out.println("YES");
                else 
                    System.out.println("NO");
            }
            
        }
    }
}
