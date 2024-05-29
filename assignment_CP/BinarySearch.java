
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int Q = sc.nextInt();
        int[] arr = new int[n];
        int[] queries = new int[Q];

        // Read array elements
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Read queries
        for (int j = 0; j < Q; j++) {
            queries[j] = sc.nextInt();
        }


        // Process each query
        for (int i = 0; i < Q; i++) {
            int x = queries[i];
            boolean found = binarySearch(arr, x);
            if (found) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }

    // Binary search function
    public static boolean binarySearch(int[] arr, int x) {
        int lower_bound = 0;
        int upper_bound = arr.length - 1;
        
        while (lower_bound <= upper_bound) {
            int middle = (lower_bound + upper_bound) / 2;
            if (arr[middle] > x) {
                upper_bound = middle - 1;
            } else if (arr[middle] < x) {
                lower_bound = middle + 1;
            } else if (arr[middle] ==x){
                return true; 
            }
        }
        return false; 
}
}
