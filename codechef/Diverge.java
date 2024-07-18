import java.util.Scanner;

public class Diverge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] arr = new int[n][m];
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i][j] = sc.nextInt();
                }
            }
            
            if (n == 1 && m == 1) {
                System.out.println(-1);
            } else if (m == 1) {
                for (int j = 0; j < n - 1; j++) {
                    int temp = arr[j][0];
                    arr[j][0] = arr[j + 1][0];
                    arr[j + 1][0] = temp;
                }
            } else {
                for (int i = 0; i < n; i++) {
                    int last = arr[i][m - 1];
                    for (int j = m - 1; j > 0; j--) {
                        arr[i][j] = arr[i][j - 1];
                    }
                    arr[i][0] = last;
                }
            }
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    System.out.print(arr[i][j] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
