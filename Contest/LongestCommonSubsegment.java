import java.util.Scanner;

public class LongestCommonSubsegment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); 
        
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }
            for (int j = 0; j < n; j++) {
                b[j] = sc.nextInt();
            }
            int result = longestCommonSubsegment(a, b, n);
            System.out.println(result);
        }
        
        sc.close();
    }
    
    public static boolean hasCommonSubsegment(int[] a, int[] b, int length, int n) {
        // Check if a common subsegment of given length exists
        for (int i = 0; i <= n - length; i++) {
            boolean match = true;
            for (int j = 0; j < length; j++) {
                if (a[i + j]!= b[j]) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }
    
    public static int longestCommonSubsegment(int[] a, int[] b, int n) {
        int minLen = Math.min(a.length, b.length); // Minimum length of the arrays
        int low = 1;
        int high = minLen; // Maximum possible length of subsegment
        int result = 0;
        
        // Perform binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            if (hasCommonSubsegment(a, b, mid, n)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return result;
    }
}