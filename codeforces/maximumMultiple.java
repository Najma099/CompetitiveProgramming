import java.util.Scanner;
public class maximumMultiple {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n = sc.nextInt();
            if(n==3)
                System.out.println(3);
            else
                System.out.println(2);
                
        }
        sc.close();
    }
}
