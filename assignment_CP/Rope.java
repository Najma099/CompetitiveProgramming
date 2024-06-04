import java.util.Scanner;
public class Rope {
    public static boolean check(int[] arr, double mid, int k) {
        int cnt = 0;
        for(int i = 0; i < arr.length; i++) 
        {
            cnt += (arr[i]/mid);
        }
        return (cnt >= k);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        double low = 1, high = 1e7, ans = 0;
        int iteration = 45;
        while(iteration-- > 0) {
            double mid = low + (high - low)/2;
            if(check(arr, mid, k)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        System.out.printf("%.6f", ans);
        sc.close();
    }
    
}
