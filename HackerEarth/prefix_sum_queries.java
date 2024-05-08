
import java.util.Scanner;

class prefix_sum_queries{
    public static int freq_char(String S, int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            int index = S.charAt(i) - 'a';
            ans ^= (1 << index);
        }
        return ans;
    }

    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        int Q = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < Q; i++) {
            String S = sc.nextLine();
            int low = sc.nextInt() - 1;
            int high = sc.nextInt() - 1;
            int freq = freq_char(S, low, high);
            if ((freq & -freq) == freq) 
                System.out.println("Possible");
            else
                System.out.println("Impossible");
        }
        sc.close();
    }
}
