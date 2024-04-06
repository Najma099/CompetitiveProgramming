
import java.util.Scanner;
public class Football {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String s= sc.next();
       
        int count=0;
        char X=s.charAt(0);
        for(int i=0;i<s.length();i++)
        {
            if(count==7)
            {
                break;
            }
            if(X==s.charAt(i))
            {
                count++;
            }
            else
            {
                X=s.charAt(i);
                count=1;
            }
        }
        if(count>6)
        System.out.println("YES");
        else
        System.out.println("NO");
        sc.close();
    }
}
