import java.util.Scanner;
import java.util.Arrays;

public class Face {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine(); 

        char[][] arr = new char[n][m];
        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < m; j++) {
                arr[i][j] = line.charAt(j);
            }
        }
        
        int count = 0;
        String target = "acef";
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                char[] square = {
                    arr[i][j], arr[i][j + 1],
                    arr[i + 1][j], arr[i + 1][j + 1]
                };
                
                Arrays.sort(square);
                String formed = new String(square);
                
                if (target.equals(formed)) {
                    count++;
                }
            }
        }
        
        System.out.println(count);
        sc.close();
    }
}
