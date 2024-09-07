import java.util.Scanner;

public class holloDia {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n ; j++) {
                    if(( i + j <= n/2 || j - i >= n/2 ) ||(i - j >= n/2 || i + j >= n + n/2 -1 ) ) {
                        System.out.print(" * ");
                    }
                    else
                        System.out.print("   ");
                }
                System.out.println();
            }
        }
    }
}
