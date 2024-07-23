import java.util.*;

public class Bouquet {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t = 0; t < T; t ++){

            int n = sc.nextInt();
            long m = sc.nextLong();
            long[] arr = new long[n];
            
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
            }
            
          
            Arrays.sort(arr);
            long maxarr = 0;

           
            for (int i = 0; i < n; i++) {
                long currSum = 0;
                long currCost = 0;
                
                for (int a = i; a < n && arr[a] - arr[i] <= 1; a++) {
                    currSum += arr[a];
                    currCost += arr[a];
                    
                    if (currCost <= m) {
                        maxarr = Math.max(maxarr, currSum);
                    } else {
                        break; 
                    }
                }
            }
            
            System.out.println(maxarr);
        }
        
        sc.close();
    }
}
