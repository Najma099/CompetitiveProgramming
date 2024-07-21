import java.util.*;
public class SubmissionBelt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int a = 0; a < n; a++) {
                arr[a] = sc.nextInt();
            }
            Arrays.sort(arr);
            int match = arr[n-1];
            int count = 1;
            for(int i = n-2 ; i>=0; i --) {
                if(arr[i] == match) {
                    count++;
                }
                else 
                    break;
            }
            if(count % 2 != 0)
                System.out.println("YES");
            else   
                System.out.println("NO");
        }
        sc.close();
    }
}
