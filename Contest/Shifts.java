import java.util.Scanner;

public class Shifts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        for(int i=0;i<T;i++)
        {
            String S=sc.next();
            int ans=0;
            int temp=0;
            for(int j=0;j<S.length();j++)
            {
                if(S.charAt(j)=='1')
                temp++;
                else if(temp !=0)
                ans+=temp+1;
            }
            System.out.println(ans);
        }
        sc.close();
}
}