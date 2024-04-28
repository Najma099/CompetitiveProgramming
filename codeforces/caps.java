import java.util.Scanner;
public class caps {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        StringBuilder S= new StringBuilder(sc.next());
        if(S.charAt(0)>=97 && S.charAt(0)<=122)
        {
            S.setCharAt(0,(char)(S.charAt(0)-32));
        }
        for(int i=1;i<S.length();i++)
        {
            if(S.charAt(i)>=65 && S.charAt(i)<=90)
            {
                S.setCharAt(i,(char)(S.charAt(i)+32));
            }
        }
        System.out.println(S);
        sc.close();
    }
}
