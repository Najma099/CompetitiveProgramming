import java.util.Scanner;
public class boyorgirl {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String s=sc.next();
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            boolean flag=false;
            for(int j=i+1;j<s.length();j++)
            {
                if(s.charAt(i)==s.charAt(j))
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            count++;
        }
        if(count%2==0)
        System.out.println("CHAT WITH HER!");
        else
        System.out.println("IGNORE HIM!");
    }
}
