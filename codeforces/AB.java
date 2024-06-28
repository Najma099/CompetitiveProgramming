import java.util.Scanner;

public class AB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            String a = sc.next();
            char[] arr = a.toCharArray();
            int aa = (int)arr[0] - 48;
            int b = (int)arr[2] - 48 ;
            System.out.println(aa+b);
        }
        sc.close();
    }
}
