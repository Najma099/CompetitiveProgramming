import java.util.Scanner;
import java.util.Stack;

public class GamesWithString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<Character> st = new Stack<>();
        String S = sc.next();
        int count = 0;

        for (int i = 0; i < S.length(); i++) {
            char currentChar = S.charAt(i);
            if (!st.isEmpty() && currentChar == st.peek()) {
                st.pop();
                count++;
            } else {
                st.push(currentChar);
            }
        }

        if (count % 2 == 1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close();
    }
}
