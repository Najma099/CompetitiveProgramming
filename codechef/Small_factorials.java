import java.math.BigInteger;
import java.util.Scanner;

public class Small_factorials {
   static BigInteger factorial(int N)
    {
        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE
 
        // Multiply f with 2, 3, ...N
        for (int i = 2; i <= N; i++)
            f = f.multiply(BigInteger.valueOf(i));
 
        return f;
    }
 
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
        int t = sc. nextInt();
        for(int p=1; p<=t; p++){
            int n = sc. nextInt();
            System.out.println(factorial(n));
        }
        sc.close();
	} 
}
