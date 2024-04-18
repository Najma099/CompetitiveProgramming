import java.util.Scanner;
public class Translationn {
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
            {
              flag=false;
              break;   
            }
            
        }
        if(flag)
        System.out.println("YES");
        else
        System.out.println("NO");
        sc.close();
    }
}
