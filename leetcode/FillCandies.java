package leetcode;

import java.util.Scanner;

public class FillCandies {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int N=sc.nextInt();
		    int K=sc.nextInt();
		    int M=sc.nextInt();
		    if(N%(K*M)!=0)
		    {
		        System.out.println(N/(K*M)+1);
		    }
		    else
		    System.out.println(N/(K*M));
		}
        sc.close();
	}
}
