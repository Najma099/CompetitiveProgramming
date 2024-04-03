package leetcode;

import java.util.Scanner;

public class XJumps {
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
		    int X=sc.nextInt();
		    int Y=sc.nextInt();
		    if(X%Y==0)
		    System.out.println(X/Y);
		    else if(X>Y && Y!=1)
		    {
		        System.out.println(X%Y+X/Y);
		    }
		    else
		    System.out.println(X);
		}
        sc.close();
	}
}
