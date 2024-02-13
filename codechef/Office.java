import java.util.Scanner;
public class Office
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int X= sc.nextInt();
            int Y=sc.nextInt();
            if(Y<X)
            {
                System.out.println(X*4+Y);
            }
        }
        sc.close();
    }
}