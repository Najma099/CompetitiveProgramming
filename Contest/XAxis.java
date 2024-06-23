import java.util.Arrays;
import java.util.Scanner;

public class XAxis {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int x1 = sc.nextInt();
            int x2 = sc.nextInt();
            int x3 = sc.nextInt();
            
            int[] points = {x1, x2, x3};
            Arrays.sort(points);
            
            int minF = points[2] - points[0];
            
            System.out.println(minF);
        }
        
        sc.close();
    }
}
