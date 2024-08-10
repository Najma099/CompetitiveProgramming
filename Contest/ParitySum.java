import java.util.Arrays;
import java.util.Scanner;

public class ParitySum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            Long[] arr = new Long[n];
            Long max = -1L;
            Long even = -1L;
            int countOdd = 0;

            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextLong();
                if (arr[j] % 2 != 0) {
                    if (arr[j] > max) {
                        max = arr[j];
                    }
                    countOdd++;
                }
                else if(arr[j] > even)
                    even = arr[j];
            }

            if (countOdd == n || countOdd == 0) {
                System.out.println("OUTPUT:"+0);
            } else {
                int ans = 0;
                Arrays.sort(arr);
                for (int o = 0; o < n; o++) {
                    if (arr[o] % 2 == 0) {
                        if (max <= arr[o]) {
                            max +=even;
                            ans++;
                        }
                        max += arr[o];
                        ans++;
                        
                    }
                    //System.out.print("MAX:" + max);
                }
                System.out.println("OUTPUT:"+ans);
            }
        }
        sc.close();
    }
}
