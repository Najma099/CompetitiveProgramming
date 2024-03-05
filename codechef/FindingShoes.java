import java.util.Scanner;

public class FindingShoes {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int N=sc.nextInt();
		    int M=sc.nextInt();
		    if(M-N<0)
		    {
		        if(M==0)
		        System.out.println(N*2);
		        else
		        System.out.println((M-N)*(-1)+N);
		    }
		    
		    else
		    System.out.println(N);
		    
		}
        sc.close();
	}
}
