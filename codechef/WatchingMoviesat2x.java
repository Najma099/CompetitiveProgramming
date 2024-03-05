import java.util.Scanner;

public class WatchingMoviesat2x {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int X=sc.nextInt();
        int Y=sc.nextInt();
        System.out.print(X-Y/2);
        sc.close();
	}
}
