import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // number of test cases
        
        for (int testCase = 0; testCase < t; testCase++) {
            long n = sc.nextLong(); // number of cards
            int pyramidCount = 0;
            int height = 1;
            
            while (n >= height) {
                n -= height;
                pyramidCount++;
                height++;
            }
            
            System.out.println(pyramidCount);
        }
        
        sc.close();
    }
}
