import java.util.Scanner;
public class games_with_integer {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            if(n%3==0)
            System.out.println("Second");
            else
            System.out.println("First");
        }
        sc.close();
    }
}
