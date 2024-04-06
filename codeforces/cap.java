
import java.util.Scanner;
public class cap {
    public static void main(String[] args) {
        Scanner sc= new Scanner (System.in);
        String C=sc.next();
        char ch=C.charAt(0);
        if(ch>=97 && ch<=122)
        {
            System.out.print((char)(ch-32));
            System.out.print(C.substring(1));
        }
        else
        System.out.print(C);
        sc.close();
    }
}
