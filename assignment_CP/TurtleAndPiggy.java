import java.util.Scanner;

public class TurtleAndPiggy {

    
    public static int highestPowerOfTwo(long L, long R) {
        long highestPowerOfTwo = 0;
        long maxNumber = 0;

        for (long i = L; i <= R; i++) {
            long powerOfTwo = (long) (Math.log(i) / Math.log(2));
            if (powerOfTwo > highestPowerOfTwo) {
                highestPowerOfTwo = powerOfTwo;
                maxNumber = i;
            }
        }

        
        int exponent = (int) (Math.log(maxNumber) / Math.log(2));
        return exponent;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long L = sc.nextLong();
            long R = sc.nextLong();
            int ans = highestPowerOfTwo(L, R);
            System.out.println(ans);
        }
        sc.close();
    }
}
