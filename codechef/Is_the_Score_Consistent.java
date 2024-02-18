import java.util.Scanner;

public class Is_the_Score_Consistent {
    
    	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();
            int C=sc.nextInt();
            int D=sc.nextInt();
            if(C>=A && D>=B)
            System.out.println("POSSIBLE");
            else
            System.out.println("IMPOSSIBLE");
        }
        sc.close();
	}
    
}
