import java.util.Scanner;

public class AirConditionerTemperature {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int A=sc.nextInt();
		    int B=sc.nextInt();
		    int C=sc.nextInt();
		    if(A<=B && B>=C)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
        sc.close();

	}
}
