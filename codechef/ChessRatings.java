import java.util.Scanner;

public class ChessRatings {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    int Y=sc.nextInt();
		    if(X-Y==0)
		    System.out.println(0);
		    else if(Y-X<=8 && Y-X>0)
		    System.out.println(1);
		    else if((Y-X)%8==0)
		    System.out.println((Y-X)/8);
		    else
		    System.out.println((Y-X)/8+1);
		}
        sc.close();
	}
}
