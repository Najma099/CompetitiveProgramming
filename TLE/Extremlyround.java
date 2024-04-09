import java.util.Scanner;
public class Extremlyround {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            if(n<=10)
            System.out.println(n);
            else if(n>10 && n<100)
            System.out.println(10+n/10-1);
            else if(n>=100 && n<1000)
            System.out.println(10+9+n/100-1);
            else if(n>=1000 && n<10000)
            System.out.println(10+9+9+n/1000-1);
            else if(n>=10000 && n<100000)
            System.out.println(10+9+9+9+n/10000-1);
            else
            System.out.println(10+9+9+9+9+n/100000-1);
        }
    }
}
