import java.util.Scanner;
public class CheapTravel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int r = n/m;
        if(r == 0) {
            if(n * a <  b)
                System.out.println(a);
            else
                System.out.println(b);
        }

        else if(r * b < r * m * a) {
            if(b < (n % m) * a)
                System.out.println((n/m+1)*b);
            else
                System.out.print(n/m*b+(n % m)*a);
        }
           
        else
            System.out.print(n * a);
        sc.close();
    }
}
