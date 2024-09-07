import java.util.Scanner;
public class Ous {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int T = sc.nextInt();
       for(int i = 0; i < T; i++) {
            int n = sc.nextInt();
            for(int j = 0; j < n; j++) {
                String S = sc.next();
                for(int k = 0; k < 4; k++) {
                    if(S.charAt(k)=='#'){
                        System.out.print(4 - j + " ");
                        break;
                    }
                }
            }
            
            System.out.println();
       }
   }
}
