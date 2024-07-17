import java.util.Scanner;

public class MaximumCoins {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int N = sc.nextInt();
            int X = sc.nextInt();
            
            int loss=0;
            int gain=0;
            int a = 1;
            
            for(int i = 1; i <= N - X ; i++) {
                loss += a*2;
                a *= 2;
            }
            for(int i = 1; i <= X; i++) {
                gain +=a*2;
                a *= 2;
            }
            
            System.out.println(gain-loss);
        }
        sc.close();
	}
}
