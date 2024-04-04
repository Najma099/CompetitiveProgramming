import java.util.Scanner;
public class PrependandAppend {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        sc.nextLine();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            String s=sc.next();
            int b=n-1;
            for(int j=0;j<=b;j++,b--)
            {
                if((s.charAt(j)=='0'&& s.charAt(b)=='1')||(s.charAt(j)=='1' && s.charAt(b)=='0') )
                continue;
                else
                {
                    System.out.println(b-j+1);
                    break;
                }
            }
        }
    }
}
