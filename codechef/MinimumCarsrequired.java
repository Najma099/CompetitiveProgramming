import java.util.Scanner;

public class MinimumCarsrequired {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N=sc.nextInt();
            if(N%4!=0)
            System.out.println(N/4+1);
            else
            System.out.println(N/4);
        }
        sc.close();
	}
}
