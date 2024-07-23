import java.util.Scanner;
public class Circle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0;i < n; i++) {
                arr[i] = sc.nextInt();
            }
            if(n % 2 != 0 )
                System.out.println("Mike");
            else {
                int min = arr[0];
                int idx = 0;
                for(int i = 1; i < n;i++){
                    if(arr[i] < min) {
                        idx = i;
                        min = arr[i];
                    }

                }
                if(idx % 2 == 0)
                    System.out.println("Joe");
                else
                    System.out.println("Mike");

            }
        }
        sc.close();
    }
}
