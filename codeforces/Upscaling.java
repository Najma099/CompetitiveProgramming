package codeforces;
import java.util.Scanner;
public class Upscaling {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
          int count=0;
          boolean test=false;
          int n=sc.nextInt();
          for(int k=0;k<n;k++)
          {
            if(count==2)
            {
                if(test==false) test=true;
                else
                test=false;
                count=0;
            }
            for(int j=0;j<n;j++)
            {
              for(int m=0;m<n;m++)
              {
                  if(test==false)
                  {
                      System.out.print("##");
                      test=true;
                  }
                  else
                  {
                      System.out.print("..");
                      test=false;
                  }
              }
            } 
            count++;
            System.out.print("\n"); 
          }
          


            
        }
        sc.close();
    }
}

    