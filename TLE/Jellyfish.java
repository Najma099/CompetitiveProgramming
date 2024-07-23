import java.util.Scanner;
public class Jellyfish {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int[] arr = new int[c];
            for(int i = 0; i < c; i ++) {
                arr[i] = sc.nextInt();
            }
            int ans = b - 1;
            for(int i = 0; i < c; i++) {
                if(arr[i] == a)
                    ans += a-1;
                else if(arr[i] > a)
                    ans += (a-1);
                else
                    ans +=arr[i];
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
