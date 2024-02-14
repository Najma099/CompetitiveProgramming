import java.util.Scanner;
class Minimum_pizzas{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int T = sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N= sc.nextInt();
            int X=sc.nextInt();
            if((N*X)%4!=0)
            System.out.println((X*N)/4+1);
            else
            System.out.println((N*X)/4);
        }
        sc.close();
        
    }
}
