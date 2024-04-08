import java.util.Scanner;
public class Clock {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            String S=sc.next();
            String hh=S.substring(0,2);
            int m=Integer.parseInt(hh);
            if(m==0)
            System.out.println(12+S.substring(2)+" AM");
            else if(m>=1 && m<=11)
            {
                if(m<10)
                System.out.println("0"+m+S.substring(2)+" AM");
                else
                System.out.println(m+S.substring(2)+" AM");
            }
            else if(m==12)
            System.out.println(m+S.substring(2)+" PM");
            else
            {
                int ans=m-12;
                if(ans<10)
                System.out.println("0"+ans+S.substring(2)+" PM");
                else
                System.out.println(ans+S.substring(2)+" PM");
            }
            
        }
    }
}
