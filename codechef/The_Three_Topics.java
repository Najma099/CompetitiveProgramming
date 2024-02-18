import java.util.Scanner;

public class The_Three_Topics {
    	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int A=sc.nextInt();
		int B=sc.nextInt();
		int C=sc.nextInt();
		int X=sc.nextInt();
		if(X==A || X==B || X==C)
		System.out.print("YES");
		else
		System.out.print("No");
        sc.close();
	}
}
