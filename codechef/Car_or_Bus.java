import java.util.Scanner;

public class Car_or_Bus {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X =sc.nextInt();
		    int Y =sc.nextInt();
		    if(X>Y)
		    System.out.println("CAR");
		    else if(X<Y)
		    System.out.println("BIKE");
		    else
		    System.out.println("SAME");
		    
		}
        sc.close();

	}
}
