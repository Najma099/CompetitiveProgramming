import java.util.Scanner;
public class Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            //int[] arr = new int[n];
            for(int i = 0; i < n ;i++) {
                System.out.print(i+1 +" ");
            }
            System.out.println();
        }
        sc.close();
    }
}