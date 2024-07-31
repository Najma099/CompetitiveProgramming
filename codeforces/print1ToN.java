import java.util.Scanner;
public class print1ToN {
    public static void print(int N) {
        if(N == 0)
            return;
        else {
            print(N-1);
            System.out.println(N);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        print(N);
        sc.close();
    }
}
