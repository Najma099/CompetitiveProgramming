import java.util.Scanner;

public class water_filling {
    
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc= new Scanner(System.in);
	    int T= sc.nextInt();
	    for(int i=0;i<T;i++)
	    {
	        int B1=sc.nextInt();
	        int B2=sc.nextInt();
	        int B3=sc.nextInt();
	        if(B1+B2+B3<=1)
	        System.out.println("Water filling time");
	        else
	        System.out.println("Not now");
	    }
        sc.close();
}
}
