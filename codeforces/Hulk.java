import java.util.Scanner;
public class Hulk {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N=sc.nextInt();
        StringBuilder S= new StringBuilder("");
        for(int i=0;i<N;i++)
        {
            if(i%2==0)
            S.append("I hate ");
            else
            S.append("I love ");
            if(i!=N-1)
            S.append("that ");
            else
            S.append("it");
        }
        System.out.println(S);
        sc.close();
    }
}
