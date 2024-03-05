import java.util.Scanner;

public class BusSeatNumbering {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            if(n>=1 && n<=10)
            System.out.println("Lower double");
            else if(n>=11 && n<=15)
            System.out.println("Lower single");
            else if(n>=16 && n<=25)
            System.out.println("Upper double");
            else
            System.out.println("Upper single");
        }
        sc.close();
	}
}
