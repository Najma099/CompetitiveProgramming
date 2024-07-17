import java.util.Scanner;

public class Split {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int ans = 0;
            if (n == 1) {
                System.out.println(0);
                continue;
            }
            else {
                while(n >1) {
                    n = n -(k-1);
                    ans++;
                }
            }
            System.out.println(ans);
        }
        
        sc.close();
    }
}
