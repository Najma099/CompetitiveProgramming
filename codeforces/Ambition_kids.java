package codeforces;


import java.util.Scanner;

public class Ambition_kids {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        if (N == 1) {
            System.out.println(Math.abs(arr[0]));
            sc.close();
            return;
        }

        int maxneg = Integer.MIN_VALUE;
        int minp = Integer.MAX_VALUE;
        boolean hasNegative = false; 
        for (int i = 0; i < N; i++)
        {
            if (arr[i] <= 0 && arr[i] > maxneg) {
                maxneg = arr[i];
                hasNegative = true;
            }
            if (arr[i] > 0 && arr[i] < minp)
                minp = arr[i];
        }
        int ans;
        if (hasNegative ==false) 
        { 
            ans = minp;
        }
        else 
        {
            if (maxneg == Integer.MIN_VALUE || minp == Integer.MAX_VALUE)
                ans = Math.abs(maxneg);
            else
                ans = Math.min(Math.abs(maxneg), minp);
        }
        System.out.println(ans);

        sc.close();
    }
}
