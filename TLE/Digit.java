import java.util.*;
public class Digit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            String s = sc.next();

            if(n % 2 != 0) {
                boolean flag = false;
                for(int i = 0; i < n; i+=2) {
                    if((int)s.charAt(i) % 2 != 0) {
                       flag = true;
                        break;
                    }
                }
                if(flag)
                    System.out.println(1);
                else
                    System.out.println(2);
            }
            else {
                boolean flag = false;
                for(int i = 1; i < n; i+=2) {
                    if((int)s.charAt(i) % 2 == 0) {
                        flag = true;
                        break;
                    }

                }

                if(flag)
                    System.out.println(2);
                else
                    System.out.println(1);

            }

        }
        sc.close();
    }
}
