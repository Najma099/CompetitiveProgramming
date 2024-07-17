import java.util.Scanner;
public class Justice {
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner (System.in);
		int X = sc.nextInt();
		int Y = sc.nextInt();
		 if(X >= Y)
	        System.out.println("YES");
	    else 
	        System.out.println("NO");
        sc.close();
	}

}
