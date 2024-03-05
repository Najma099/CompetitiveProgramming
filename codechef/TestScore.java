import java.util.Scanner;

public class TestScore {
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		   int X=sc.nextInt();
		   if(X<=50)
		   System.out.println("LEFT");
		   else
		   System.out.println("RIGHT");
		}
        sc.close();

	}
}
