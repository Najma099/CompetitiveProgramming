import java.util.Scanner;

public class Flipthecards {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    int Y=sc.nextInt();
		    if(X-Y>Y)
		    System.out.println(Y);
		    else
		    System.out.println(X-Y);
		}
        sc.close();
	}
}
