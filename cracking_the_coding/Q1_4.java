import java.util.Scanner;
public class Q1_4 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String S= sc.nextLine();
        S.toLowerCase();
        int a=0;
        for(int i=0;i<S.length();i++)
        {
            if(S.charAt(i)>=97 && S.charAt(i)<=122)
            {
                int index=(int)(S.charAt(i)-'a');
                a=a^(1<<index);
            }
        }
        int count=0;
        while(a!=0)
        {
            if((a & 1)==1)
            count++;
            a=a>>1;
        }
        if(count<2)
        System.out.print("True");
        else
        System.out.print("False");
        sc.close();
    }
}
