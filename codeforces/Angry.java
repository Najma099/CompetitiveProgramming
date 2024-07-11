import java.util.Scanner;
import java.util.Arrays;
public class Angry {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] arr = new int[k];
            for(int T = 0; T < k ; T++) {
                arr[T] = sc.nextInt();
            }
            Arrays.sort(arr);
            int ans= 0;
            for(int s = 0; s < k-1; s++)
            {
                if(arr[s]==1)
                    ans+=1;
                else{
                    ans += (arr[s]*2)-1;
                }
            }
            System.out.println(ans);
        } 
        sc.close();
    }
    
}
