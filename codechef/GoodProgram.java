import java.util.Scanner;

public class GoodProgram {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    if(X%4==0)
		    System.out.println("Good");
		    else
		    System.out.println("Not Good");
		}
		
        sc.close();
	}
}
