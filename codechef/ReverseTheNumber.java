import java.util.Scanner;

public class ReverseTheNumber {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int T= sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n= sc.nextInt();
            int ld=0;
            while(n>0)
            {
                ld=ld*10+n%10;
                n=n/10;
            }
            System.out.println(ld);
        }
        sc.close();
	}
        
}
