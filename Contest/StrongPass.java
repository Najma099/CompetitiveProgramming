import java.util.Scanner;

public class StrongPass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine(); 
        
        for (int i = 0; i < T; i++) {
            String s = sc.nextLine();
            StringBuilder sb = new StringBuilder(s);
            int n = s.length();
            boolean flag = false;

            for (int j = 0; j < n - 1; j++) {
                if (s.charAt(j) == s.charAt(j + 1)) {
                    char newChar = s.charAt(j) == 'z' ? 'a' : (char) (s.charAt(j) + 1);
                    sb.insert(j + 1, newChar);
                    flag = true;
                    break;
                }
            }

            if (!flag) {
                char ch = s.charAt(n - 1);
                if (ch == 'z') {
                    sb.append('a');
                } else {
                    sb.append((char) (ch + 1));
                }
            }

            System.out.println(sb.toString());
        }

        sc.close();
    }
}
