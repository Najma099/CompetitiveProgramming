import java.util.Scanner;
import java.util.Arrays;

public class Guess {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();
            int[] arr = new int[N];
            
            for (int i = 0; i < N; i++) {
                arr[i] = sc.nextInt();
            }
            
            int[] a = new int[N-1];
            for (int j = 0; j < N - 1; j++) {
                a[j] = Math.max(arr[j], arr[j+1]);
            }
            
            Arrays.sort(a);
            System.out.println(a[0] - 1);
        }
        
        sc.close();
    }
}
