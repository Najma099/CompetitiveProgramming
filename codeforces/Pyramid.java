import java.util.Scanner;
public class Pyramid {
    public static void Pyraamid(int space, int star,int n) {
        if(space == n)
            return;
        else {
            Pyraamid(space+1,star-1,n);
            for(int i = 0;i <space;i++) {
                System.out.print(" ");
            }
            for(int j = 0;j < star*2 - 1;j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Pyraamid(0,n,n);
        sc.close();
    }
}
