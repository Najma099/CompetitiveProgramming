import java.util.Scanner;

public class Chefland_Games {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int R1=sc.nextInt();
            int R2=sc.nextInt();
            int R3=sc.nextInt();
            int R4=sc.nextInt();
            if(R1+R2+R3+R4>0)
            System.out.println("OUT");
            else
            System.out.println("IN");
        }
        sc.close();
    }
}
