import java.util.Scanner;
public class Diagonals {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            if(k == 0)
                System.out.println(0);
            else if(k <= n)
                System.out.println(1);
            else {
                int count = 1;
                k -= n;
                int a = 1;
                while(a <= n) {
                    if(k > 0) {
                        k -= (n-a);
                        //System.out.println(k);
                        count ++;
                    }
                    if(k > 0) {
                        k -= (n-a);
                       // System.out.println(k);
                        count ++;
                    }
                    a++;
                }
                System.out.println(count);
            }
        }
        sc.close();
    }
}
