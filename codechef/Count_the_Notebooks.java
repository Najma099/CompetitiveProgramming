import java.util.Scanner;

public class Count_the_Notebooks {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int N=sc.nextInt();
		    System.out.println(N*1000/100);
		}
		
        sc.close();
	}
}
