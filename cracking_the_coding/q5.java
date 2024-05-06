import java.util.Scanner;
public class q5 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        if(s1.length()==s2.length())
        {
            System.out.println(replace_once(s1,s2));
        }
        else if(Math.abs(s1.length()-s2.length())==1)
        {
            if(s1.length()<s2.length())
            System.out.println(insert_once(s1,s2));
            else
            System.out.println(insert_once(s2,s1));

        }
        else
        System.out.println(false);
        sc.close();
    }
    
    public static boolean replace_once(String s1,String s2)
    {
        boolean replaced= false;
        for(int i=0;i<s1.length();i++)
        {
            if(s1.charAt(i)!= s2.charAt(i))
            {
                if(replaced)
                {
                    return false;
                }
                replaced =true;
            }
        }
        return true;
    }
    public static boolean insert_once(String s1,String s2)
    {
        int max_pt=0;
        int min_pt=0;
        while(min_pt<s1.length() && max_pt<s2.length())
        {
            if(s1.charAt(min_pt) != s2.charAt(max_pt))
            {
                if(min_pt !=max_pt)
                {
                    return false;
                }
                max_pt++;
            }
            else
            {
                max_pt++;
                min_pt++;
            }
        }
        return true;
    }
    
}
