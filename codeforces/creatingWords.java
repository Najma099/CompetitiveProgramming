import java.util.Scanner;
public class creatingWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int T = sc.nextInt();
        for(int i=0;i<T;i++)
        {
            StringBuilder a=new StringBuilder(sc.next());
            StringBuilder b=new StringBuilder(sc.next());
            char temp = a.charAt(0);
            char tempp = b.charAt(0);
            a.setCharAt(0, tempp);
            b.setCharAt(0, temp);
            System.out.print(a + " ");
            System.out.println(b);
        }
        sc.close();
    }
}
