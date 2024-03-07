import java.util.Scanner;

public class ChefandWaterBottles {

	public static void main (String[] args) throws java.lang.Exception
	{
    Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int N=sc.nextInt();
		    int X=sc.nextInt();
		    int K=sc.nextInt();
		    if(N*X>K)
		    {
		      if((N*X-K)%X!=0)
		      System.out.println(N-(((N*X-K)/X)+1));
		      else
		      System.out.println(N-(N*X-K)/X);  
		    }
		    else
		    System.out.println(N);
		}
		sc.close();

	}
}
