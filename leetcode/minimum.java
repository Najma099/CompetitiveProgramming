import java.util.Scanner;
public class minimum{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S=sc.next();
        int curr = 0;
        int max = 0;
        
        for(int i = 0; i < S.length(); i++) {
            if(S.charAt(i) == 'E') {
                curr++;
                if(curr > max) {
                    max = curr;
                }
            } else if(S.charAt(i) == 'L') {
                curr--;
            }
        }
        
        System.out.println(max);
        sc.close();
    }
}