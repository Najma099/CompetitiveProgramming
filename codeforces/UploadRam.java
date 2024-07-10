import java.util.Scanner;
public class UploadRam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            if(n == 1)
                System.out.println(n);
            else
                System.out.println((n-1) * k + 1);
        }
        sc.close();
    }
}
