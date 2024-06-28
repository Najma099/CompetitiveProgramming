import java.util.Scanner;
public class GoodArray {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int T = sc.nextInt();
       for(int i = 0; i < T ; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            
           System.out.println(2+(n-2)/k);
       }
       sc.close();
    }
}
