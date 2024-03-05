import java.util.Scanner;

public class Qualifytheround {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    int A=sc.nextInt();
		    int B=sc.nextInt();
		    if(X<=A+B*2)
		    System.out.println("Qualify");
		    else
		    System.out.println("NotQualify");
		}
        sc.close();
	}
}
