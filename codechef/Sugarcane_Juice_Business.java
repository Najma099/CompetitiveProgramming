import java.util.Scanner;

public class Sugarcane_Juice_Business {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int T =sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N=sc.nextInt();
            System.out.println((50-((50*20)/100+(50*20)/100+(50*30)/100))*N);
        }
        sc.close();
	}
}
