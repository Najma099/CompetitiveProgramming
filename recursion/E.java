import java.util.Scanner;
public class E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j == 0 || i == 0 || i == n-1 || (i == n/2 && j != 4 && j != 5 && j != 6))
                    System.out.print(" * ");
                else    
                    System.out.print("   ");
            }
            System.out.println();
        }
    }
}
