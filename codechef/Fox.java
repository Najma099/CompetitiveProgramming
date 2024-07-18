import java.util.Scanner;
public class Fox {
    public static void main(String[] args) {

       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       int m = sc.nextInt();
       boolean flag = true;

       for(int i = 0; i < n ; i++) {
            if(i % 2 == 0) {
                for(int j = 0; j < m; j++) {
                    System.out.print('#');
                }
            }
            else {
                if(flag) {
                    for(int j = 0; j < m-1; j++) {
                        System.out.print('.');
                    }
                    System.out.print('#');
                    flag = false;
                }
                else {
                    System.out.print('#');
                    for(int j = 0; j < m-1; j++) {
                        System.out.print('.');
                    }
                    flag = true;
                }
            }
            System.out.println();
       }
        sc.close();
    }
}
