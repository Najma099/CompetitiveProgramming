import java.util.Scanner;
public class Minimize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0;t < T ; t++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(b-a);
        }
    }
}
