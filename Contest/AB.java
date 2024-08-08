import java.util.Scanner;
public class AB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int sum = 0;
            sum +=(n % 10);
            n=n/10;
            sum += n;
            System.out.println(sum);
        }
        sc.close();
    }
}
