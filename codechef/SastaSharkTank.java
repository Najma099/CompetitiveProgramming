import java.util.Scanner;

public class SastaSharkTank {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();
            if(A/0.1>B/0.2)
            System.out.println("FIRST");
            else if(A/0.1<B/0.2)
            System.out.println("SECOND");
            else
            System.out.println("ANY");
        }
        sc.close();
	}
}
