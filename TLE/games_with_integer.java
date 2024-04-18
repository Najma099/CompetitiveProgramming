import java.util.Scanner;
public class games_with_integer {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            boolean flag=true;
            for(int j=1;j<=10;j++)
            {
                if(j%2!=0 && (n+j)%3==0)
                {
                    flag=false;
                    break;
                }
                else if(j%2==0 && (n+j)%3==0)
                {
                    break;
                }
            }
            if(flag==false)
            System.out.println("First");
            else
            System.out.println("Second");
        }
        sc.close();
    }
}
