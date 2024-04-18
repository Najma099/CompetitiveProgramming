
import java.util.Scanner;
public class upscallingg {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int s=0;s<t;s++)
        {
            int n=sc.nextInt();
            for(int i=1;i<=n;i++)
            {
                for(int k=0;k<2;k++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        if((i+j)%2==0)
                        {
                            System.out.print("##");
                        }
                        else
                        System.out.print("..");
                    } 
                    System.out.print("\n"); 
                }
            } 
        }
        
        sc.close();
    }
}
