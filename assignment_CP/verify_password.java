import java.util.Scanner;

public class verify_password {

    public static Boolean validPass(StringBuilder b) {
        int N = b.length();
        boolean digitSeen = false;
        boolean letterSeen = false;
        char lastDigit = '0' - 1;

        for (int i = 0; i < N; i++) {
            char currentChar = b.charAt(i);

            if (Character.isDigit(currentChar)) {
                if (letterSeen) {
                    return false;
                }
                if (currentChar < lastDigit) {
                    return false;
                }
                lastDigit = currentChar;
                digitSeen = true;
            } else if (Character.isLowerCase(currentChar)) {
                letterSeen = true;
            } else {
                return false;
            }
        }

        char lastLetter = 'a' - 1;
        for (int i = 0; i < N; i++) {
            if (Character.isLowerCase(b.charAt(i))) {
                if (b.charAt(i) < lastLetter) {
                    return false;
                }
                lastLetter = b.charAt(i);
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            StringBuilder b = new StringBuilder(sc.next());
            Boolean ans = validPass(b);
            if (ans) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
