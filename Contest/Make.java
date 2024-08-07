import java.util.Scanner;

public class Make {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            String s = sc.next();
            
            int one = 0;
            int zero = 0;
            
            boolean countZero = true;
            
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '1') {
                    one++;
                    countZero = true;
                } else {
                    if (countZero) {
                        zero++;
                        countZero = false;
                    }
                }
            }
            
            if (one > zero) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
        sc.close();
    }
}
