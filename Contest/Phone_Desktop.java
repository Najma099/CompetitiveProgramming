import java.util.Scanner;
public class Phone_Desktop {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            //int ans=x+y*4;
            if(x !=0 && y!=0)
            {
                int no_of_grid=0;
                int no_of_box_remaining=0;
                if(y==1)
                {
                    no_of_grid=1;
                    no_of_box_remaining=0;
                    no_of_box_remaining=15*no_of_grid-1*4;
                    if(x<=no_of_box_remaining)
                    {
                        System.out.println(no_of_grid);
                    }
                    else
                    {
                        int a=x-no_of_box_remaining;
                        if(a%15==0)
                        {
                            System.out.println(no_of_grid+a/15);
                        }
                        else
                            System.out.println(no_of_grid+a/15+1);
                    }
                }
                else
                {
                    if(y%2==0)
                    {
                        no_of_grid=y/2;
                        no_of_box_remaining=15*no_of_grid-y*4;
                        if(no_of_box_remaining>=x)
                         System.out.println(no_of_grid);
                        else
                        {
                        int a=x-no_of_box_remaining;
                        if(a%15==0)
                        {
                            System.out.println(no_of_grid+a/15);
                        }
                        else
                            System.out.println(no_of_grid+a/15+1);
                        }
                          
                    }
                    if(y%2==1)
                    {
                        no_of_grid=y/2+1;
                        no_of_box_remaining=15*no_of_grid-y*4;
                        if(no_of_box_remaining>=x)
                         System.out.println(no_of_grid);
                        else
                        {
                        int a=x-no_of_box_remaining;
                        if(a%15==0)
                        {
                            System.out.println(no_of_grid+a/15);
                        }
                        else
                            System.out.println(no_of_grid+a/15+1);
                        } 
                    }
                }
            }
            else if(x==0)
            {
                if(y%2==0)
                System.out.println(y/2);
                else
                System.out.println(y/2+1);
            }
            else
            {
                if(x %15==0)
                System.out.println(x/15);
                else
                System.out.println(x/15+1);
            }
        }
        sc.close();
    }
}
