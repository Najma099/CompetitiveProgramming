import java.util.Scanner;
public class caps {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String S=sc.next();
        boolean flag=true;
        StringBuilder A=new StringBuilder("");
        
        
        if(S.charAt(0)>=97 && S.charAt(0)<=122)
        {
            A.append((char)(S.charAt(0)-32));
        }
        else if(S.charAt(0)>=65 && S.charAt(0)<=90)
        {
            A.append((char)(S.charAt(0)+32));
        }
        for(int i=1;i<S.length();i++)
        {
            if(S.charAt(i)>=65 && S.charAt(i)<=90)
            A.append((char)(S.charAt(i)+32));
            else
            {
                flag=false;
                break;
            }
        }
        
        if(flag==false)
        System.out.println(S);
        else
        System.out.println(A);
        sc.close();
    }
}
