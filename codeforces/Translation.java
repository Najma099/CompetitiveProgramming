import java.util.Scanner;
public class Translation {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String S=sc.next();
        String T=sc.next();
        int n=S.length()-1;
        boolean flag=false;
        for(int i=0;i<=n;i++)
        {
            if(T.charAt(i)==S.charAt(n-i))
            flag=true;
            else
            break;
        }
        if(flag==true)
        System.out.println("YES");
        else
        System.out.println("NO");
        sc.close();
    }
}
