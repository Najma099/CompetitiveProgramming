
import java.util.Scanner;
public class settingcamp {
   
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int d=3-(b%3);
            if(b%3==0)
            {
                if(c%3==0)
                System.out.println(a+b/3+c/3);
                else
                System.out.println(a+b/3+c/3+1);
            }
            else if(d<=c)
            {
                if((c-d)%3==0)
                System.out.println(a+(b+d)/3+(c-d)/3);
                else
                System.out.println(a+(b+d)/3+(c-d)/3+1);
            }
            else
            System.out.println(-1);
        }
        sc.close();
    }
}

