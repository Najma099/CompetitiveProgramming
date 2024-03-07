import java.util.Scanner;

public class Mario_and_Transformation {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    if( X%3==1)
		    System.out.println("Huge");
		    else if(X%3==2)
		    System.out.println("Small");
		    else
		    System.out.println("Normal");
		    
		}
        sc.close();
	}
}
