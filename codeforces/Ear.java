import java.util.*;

public class Ear {
    
    static long gcd(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    static long lcm(long a, long b) {
        return (a * b) / gcd(a, b);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            long[] arr = new long[n];
            
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
            }
            
            long lcmValue = 1;
            long[] res = new long[n];
            
            for (int i = 0; i < n; i++) {
                lcmValue = lcm(lcmValue, arr[i]);
            }
            
            long sum = 0;
            boolean valid = true;
            
            for (int i = 0; i < n; i++) {
                res[i] = lcmValue / arr[i];
                sum += res[i];
                if (res[i] <= 0 || res[i] > lcmValue / arr[i]) {
                    valid = false;
                    break;
                }
            }
            
            if (valid && sum < lcmValue) {
                for (int i = 0; i < n; i++) {
                    System.out.print(res[i] + " ");
                }
            } else {
                System.out.print("-1");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
