import java.util.Scanner;
public class ChessForThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0; i < T; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if((a + b + c) % 2 == 0){
                if(a+b == c)
                    System.out.println(c);
                else if( a+b < c)
                    System.out.println(a + b);
                else
                    System.out.println((a + b + c)/2);
            }
            else
                System.out.println(-1);
        }
        sc.close();
    }
}
