package codeforces;
import java.util.Scanner;
public class Stair_Peak {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T= sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();
            int C=sc.nextInt();
            if(A<B && B<C && A<C)
            {
                System.out.println("STAIR");
            }
            else if(A<B && B>C)
            {
                System.out.println("PEAK");
            }
            else
            System.out.println("NONE");
        } 
        sc.close();

    }
}