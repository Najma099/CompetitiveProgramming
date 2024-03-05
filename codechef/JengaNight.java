import java.util.Scanner;

public class JengaNight {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N=sc.nextInt();
            int X=sc.nextInt();
            if(X%N==0)
            System.out.println("YES");
            else
            System.out.println("No");
        }
        sc.close();
	}
}
