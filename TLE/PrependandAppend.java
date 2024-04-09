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
            int high=n-1;
            int low=0;
            boolean flag=false;
            while(low<=high)
            {
                if((s.charAt(low)=='1' && s.charAt(high)=='0')|| (s.charAt(low)=='0' && s.charAt(high)=='1'))
                {
                    low++;
                    high--;
                    flag=true;
                }
                else
                {
                    System.out.println(high-low+1);
                    flag=false;
                    break;
                }

            }
            if(flag==true)
            System.out.println(0);
        }
    }
}
