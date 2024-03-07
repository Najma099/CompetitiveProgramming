import java.util.Scanner;

public class CandyDistribution {
    	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    float N=sc.nextFloat();
		    float M=sc.nextFloat();
		    if(N/M%2==0)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
        sc.close();
	}
}
