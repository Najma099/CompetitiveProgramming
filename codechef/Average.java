import java.util.Scanner;
public class Average 
{
    public static void main(String[] args){
        Scanner sc= new Scanner (System.in);
        int tc=sc.nextInt();
        for(int i=0;i<tc;i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            System.out.println("\n");
            if((a+b)>2*c)
            {
                System.out.println("YES");
            }
            else
            {
                System.err.println("NO");
            }
        }
        sc.close();
}
}


