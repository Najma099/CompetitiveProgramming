import java.util.Scanner;
public class CRED_Coins{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of T");
        int T =sc.nextInt();
        for(int i=0;i<T;i++)
        {
            System.out.print("Enter X:");
            int X= sc.nextInt();
            System.out.print("Enter Y:");
            int Y= sc.nextInt();
            System.out.println((X*Y)/100);
        }
        sc.close();
    }
}