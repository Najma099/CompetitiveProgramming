
import java.util.Scanner;
public class Target {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            String[] str= new String[10];
            for(int j=0;j<10;j++)
            {
                str[j]=sc.next();
            }
            int sum=0;
            for(int j=0;j<10;j++)
            {
                for(int k=0;k<10;k++)
                {
                    char ch = str[j].charAt(k);
                    if(ch=='X')
                    {
                        if(j==0 || j==9|| k==0||k==9)
                           sum=sum+1;
                        else if(j==1 || j==8) 
                            {
                                if(k==0 ||k==9)
                                sum=sum+1;
                                else
                                sum=sum+2;
                            }
                        else if(j==2 || j==7)
                           {
                            if(k==0 ||k==9)
                            sum=sum+1;
                            else if(k==1 || k==8)
                            sum=sum+2;
                            else
                            sum=sum+3;
                           }

                        else if(j==3 || j==6)
                        {
                            if(k==0 ||k==9)
                            sum=sum+1;
                            else if(k==1 || k==8)
                            sum=sum+2;
                            else if(k==2 || k==7)
                            sum=sum+3;
                            else
                            sum=sum+4;
                        }

                        else 
                        {
                            if(k==0 ||k==9)
                            sum=sum+1;
                            else if(k==1 || k==8)
                            sum=sum+2;
                            else if(k==2 || k==7)
                            sum=sum+3;
                            else if(k==3 || k==6)
                            sum=sum+4;
                            else
                            sum=sum+5;
                        }
                    }
                }
            }
            
            System.out.println(sum);

        }
        sc.close();
    }
}
