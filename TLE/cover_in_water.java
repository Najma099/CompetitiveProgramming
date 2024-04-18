import java.util.Scanner;
public class cover_in_water{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        sc.nextLine();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            sc.nextLine();
            String S=sc.nextLine();
            boolean flag=true;
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(S.charAt(j)=='.')
                count++;
                if(j>0 && j<n-1 && S.charAt(j-1)=='.' && S.charAt(j)=='.' && S.charAt(j+1)=='.')
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
            System.out.println(2);
            else
            System.out.println(count);
        }
        sc.close();
    }
}