
import java.util.Scanner;
public class long_long_Sum {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        long[] S= new long[n];
        for(int i=0;i<n;i++)
        {
            S[i]=sc.nextLong();
        }
        long[] A=new long[n];
        A[0]=S[0];
        for(int j=1;j<n;j++)
        {
            A[j]=A[j-1]+S[j];
        }
        System.out.println(A[n-1]);
        sc.close();
	}
}
