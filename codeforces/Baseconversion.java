import java.util.Scanner;
public class Baseconversion {
    public static void binary(int n) {
        if(n == 0) {
            return;
        }
        binary(n/2);
        System.out.print(n % 2);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            binary(n);
            System.out.println();
        }
        sc.close();
    }
}
