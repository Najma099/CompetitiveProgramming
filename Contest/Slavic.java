import java.util.Scanner;
public class Slavic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i ++) {
            String a = sc.next();
            String b = sc.next();

            int g = 0;
            int h = 0;

            while(g != a.length()) {
                if(b.charAt(g) == a.charAt(h) || b.charAt(g) == '?') {
                    h++;
                }
                g++;
            }
            if(g == b.length()-1)
                System.out.println("Yes");
            else
                System.out.println("No");

        }
        sc.close();
    }
}
