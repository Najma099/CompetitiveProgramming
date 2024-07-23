import java.util.Scanner;
public class Vasilije {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            Long n = sc.nextLong();
            Long k = sc.nextLong();
            Long x = sc.nextLong();

            Long max = k*n-k*(k-1)/2;
            Long min = k*(k+1)/2;

            if(x>= min && x<=max)
                System.out.println("YES");
            else   
                System.out.println("NO");
        }
        sc.close();
    }
}
