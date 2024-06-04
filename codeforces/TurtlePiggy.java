import java.util.Scanner;
public class TurtlePiggy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for(int t=0;t<T;t++)
        {
            int l=sc.nextInt();
            int U=sc.nextInt();
            int a=2;
            int count=0;
            while(l<=U)
            {
                if(a>=l)
                count++;
                a=a*2;
            }
            System.out.println(count);
        }
        sc.close();
    }
}
