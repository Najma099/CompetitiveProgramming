import java.util.Scanner;

public class Chef_and_NextGen {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int A= sc.nextInt();
		    int B= sc.nextInt();
		    int X= sc.nextInt();
		    int Y= sc.nextInt();
		    if(X*Y>=A*B)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
        sc.close();

	}
}
