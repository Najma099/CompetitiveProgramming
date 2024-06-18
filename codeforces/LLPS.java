import java.util.Scanner;

public class LLPS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        StringBuilder result = new StringBuilder();
        
        for(char ch = 'z'; ch >= 'a'; ch--) {
            boolean found = false;
            for(int i = 0; i < S.length(); i++) {
                if(S.charAt(i) == ch) {
                    result.append(ch);
                    found = true;
                }
            }
            if(found)
                break;
        }
        
        System.out.println(result.toString());
        sc.close();
    }
}
