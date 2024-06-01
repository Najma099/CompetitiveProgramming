import java.util.Scanner;
import java.util.Arrays;
public class Password {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int t=0;t<T;t++)
        {
            int n=sc.nextInt();
            String S=sc.next();
            char[] ch=S.toCharArray();
            Arrays.sort(ch);
            String ans= new String(ch);
            if(S.equals(ans))
                System.out.println("YES");
            else
                System.out.println("NO");

        }
        sc.close();
    }
}
