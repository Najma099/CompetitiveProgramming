import java.util.Scanner;

public class printDigit {
    public static void print(int n) {
        if(n % 10 == n) {
            System.out.print(n +" ");
            return;
        }
        print(n/10);
        System.out.println(n % 10 + " ");
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            int N = sc.nextInt();
            print(N);
            System.out.println();
        }
        sc.close();
    }
}
