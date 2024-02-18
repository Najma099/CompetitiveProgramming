import java.util.Scanner;

public class Chef_and_Candies {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for( int i=0;i<T;i++)
		{
		    int N=sc.nextInt();
		    int X=sc.nextInt();
		    if(N-X>0)
		    {
		        if((N-X)%4==0)
		        System.out.println((N-X)/4);
		        else
		        System.out.println((N-X)/4+1);
		    }
		    else
		    System.out.println(0);
		}
        sc.close();

	}
}
