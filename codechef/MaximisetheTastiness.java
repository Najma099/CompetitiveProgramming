import java.util.Scanner;

public class MaximisetheTastiness {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int d=sc.nextInt();
            if(a>=b)
             {
                 if(c>=d)
                 System.out.println(a+c);
                 else
                 System.out.println(a+d);
             }
             else if(b>a)
             {
                 if(c>=d)
                 System.out.println(b+c);
                 else
                 System.out.println(b+d);
             }
        }
        sc.close();
	}
}
