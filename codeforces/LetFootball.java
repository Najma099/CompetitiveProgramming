import java.util.Scanner;
public class LetFootball {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        
        int mul = a*c;
        if(mul % b == 0 )
            System.out.print(mul/b -c);
        else
            System.out.print(mul/b + 1 - c);

        sc.close();

    }
}
