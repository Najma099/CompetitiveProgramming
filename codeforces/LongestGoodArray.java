import java.util.Scanner;

public class LongestGoodArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i = 0; i < t; i++) {
            long l = sc.nextLong();
            long r = sc.nextLong();
            long diff = r - l;
            long sum = 0;
            long len = 0;
            
            while (sum <= diff) {
                sum += len;
                len++;
            }
            
            System.out.println(len - 1);
        }
        sc.close();
    }
}
