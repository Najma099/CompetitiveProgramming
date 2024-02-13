import java.util.Scanner;
 public class janmansh
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int T= sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int X= sc.nextInt();
            if(10-X>=3)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
        sc.close();
    }
}