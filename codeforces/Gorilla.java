import java.util.Scanner;

public class Gorilla {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();
            
            int[] arr = new int[n];
            
            // Initialize array with numbers 1 to n
            for (int i = 0; i < n; i++) {
                arr[i] = i + 1;
            }
            
            // Adjust array elements
            arr[0] = k;
            arr[n - 1] = m + 1;
            
            // Ensure all elements are distinct
            if (arr[0] == arr[n - 1]) {
                // Swap arr[n-1] with the last element in the initial array
                for (int i = 0; i < n - 1; i++) {
                    if (arr[i] != k && arr[i] != m + 1) {
                        int temp = arr[i];
                        arr[i] = arr[n - 1];
                        arr[n - 1] = temp;
                        break;
                    }
                }
            }
            
            // Output the permutation
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
