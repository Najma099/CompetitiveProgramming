package codeforces;
import java.util.Scanner;
public class Upscaling {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            if(n%2!=0)
            n=n+1;
            
            for(int k=0;k<2*n/2;k++)
            {
                boolean a=true;
                if(k%2==0)
                a=true;
                else
                a=false;
                for(int j=0;j<2*n/2;j++)
                {
                    if(a==true)
                    {
                        System.out.print("##\n##");
                        a=false;
                    }
                    else
                    {
                        System.out.print("..\n..");
                        a=true;
                    }
                }
                System.out.println("\n");
         
           }
        }
        sc.close();
    }
}

    