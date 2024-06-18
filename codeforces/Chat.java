import java.util.*;

public class Chat {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine(); 
        
        LinkedList<String> chatList = new LinkedList<>();
        HashSet<String> seen = new HashSet<>();
        
        for (int i = 0; i < n; i++) {
            String friend = scanner.nextLine().trim();
            if (!seen.contains(friend)) {
                chatList.addFirst(friend);
                seen.add(friend);
            } else {
                chatList.remove(friend);
                chatList.addFirst(friend);
            }
        }
        
        
        for (String friend : chatList) {
            System.out.println(friend);
        }
        
        scanner.close();
    }
}
