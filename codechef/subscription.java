import java.util.Scanner;
public class subscription
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int tc = sc.nextInt();
        for(int i=0;i<tc;i++)
        {
           int N=sc.nextInt();
           int X=sc.nextInt();
           if(N%6 !=0)
           {
               System.out.println(((N/6)+1)*X);
           }
           else
           System.out.println((N/6)*X);
        }
        sc.close();
        
    }
}