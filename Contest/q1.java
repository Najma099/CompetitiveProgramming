import java.util.Scanner;

public class q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int xc = sc.nextInt();
            int yc = sc.nextInt();
            int k = sc.nextInt();

            //int index = 0;
            for (int j = 0; j < k; j++) {
                int p = j ; 
                if (j % 2 == 0) {
                    System.out.println((xc + p) + " " + yc);
                } else {
                    System.out.println((xc - p) + " " + yc);
                }
            }
        }

        sc.close();
    }
}

