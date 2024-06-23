import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        for (int i = 0; i < T; i++) {
            String s = sc.next(); 
            int noOfZero = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s.charAt(j) == '0') {
                    noOfZero++;
                }
            }
            int noOfOnes = s.length() - noOfZero;
            
            int check = 0;
            for (int k = 0; k < s.length(); k++) {
                if (s.charAt(k) == '0' && noOfOnes > 0) {
                    noOfOnes--;
                } else if (s.charAt(k) == '1' && noOfZero > 0) {
                    noOfZero--;
                } else {
                    break;
                }
                check++;
            }
            System.out.println(s.length() - check);
        }
        sc.close();
    }
}
