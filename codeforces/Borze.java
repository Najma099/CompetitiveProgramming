import java.util.Scanner;
public class Borze {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String S= sc.next();
        for(int i=0;i<S.length();i++)
        {
            if(S.charAt(i)=='.')
            System.out.print(0);
            else if(S.charAt(i)=='-' && i<S.length()-1)
            {
                if(S.charAt(i+1)=='.')
                System.out.print(1);
                else
                System.out.print(2);
                i++;
            }
        }
        sc.close();
    }
}
