import java.util.*;

public class search {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        
        for(int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        
        Arrays.sort(arr);
        int Q = sc.nextInt();
        
        for(int q = 0; q < Q; q++) {
            int lowerBound = sc.nextInt();
            int upperBound = sc.nextInt();
            
            int lowerIndex = findLowerBound(arr, lowerBound);
            int upperIndex = findUpperBound(arr, upperBound);
            
            int sol = upperIndex - lowerIndex + 1;
            System.out.print(sol + " ");
        }
        
        sc.close();
    }
    
    private static int findLowerBound(int[] arr, int target) {
        int low = 0, high = arr.length - 1;
        int ans = arr.length;
        
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
    
    private static int findUpperBound(int[] arr, int target) {
        int low = 0, high = arr.length - 1;
        int ans = -1;
        
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] <= target) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
}
