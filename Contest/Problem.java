import java.util.Scanner;

public class Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) 
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            String S = sc.next();

            
            int[] freq = new int[7];
            for (int k = 0; k < n; k++) 
            {
                char ch = S.charAt(k);
                if (ch >= 'A' && ch <= 'G') 
                {
                    int index = ch - 'A';
                    freq[index]++;
                }
            }

            int ans = 0;
            for (int k = 0; k < 7; k++) 
            {
                if (freq[k] < m) 
                {
                    ans += (m - freq[k]);
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
