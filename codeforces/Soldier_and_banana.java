import java.util.Scanner;
public class Soldier_and_banana {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k=sc.nextInt();
        int n=sc.nextInt();
        int w=sc.nextInt();
        long s=k*(w*(w+1))/2;
        long t=s-n;
        //System.out.println(s);
        if(t>=0)
        System.out.print(t);
        else if(t<0)
        System.out.print(0);
        sc.close();
    }
}
