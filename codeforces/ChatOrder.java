import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class ChatOrder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<String> st = new Stack<>();
        Map<String, Boolean> mp = new HashMap<>();
        Queue<String> q = new LinkedList<>();

        for (int i = 0; i < n; i++) {
            String s = sc.next();
            st.push(s);
        }

        while (!st.isEmpty()) {
            String s = st.pop();
            if (!mp.containsKey(s)) {
                q.add(s);
                mp.put(s, true);
            }
        }

        while (!q.isEmpty()) {
            System.out.println(q.poll());
        }

        sc.close();
    }
}
