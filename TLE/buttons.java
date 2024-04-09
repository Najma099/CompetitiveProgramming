import java.util.Scanner;
public class buttons{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            if(c%2==0)
            {
                if(a>b)
                System.out.println("First");
                else
                System.out.println("Second");
            }
            else{
                a+=1;
                if(a>b)
                System.out.println("First");
                else
                System.out.println("Second");
            }
        }
    }
}