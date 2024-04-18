

import java.util.Scanner;

public class Blackjack {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int A=sc.nextInt();
		    int B=sc.nextInt();
		    int C=21-(A+B);
		    if(C<=10)
		    System.out.println(C);
		    else
		    System.out.println(-1);
		}
        sc.close();
	}
}
