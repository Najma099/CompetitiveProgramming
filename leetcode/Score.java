
import java.util.Scanner;
public class Score {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String S = sc.next();
        int n=S.length();
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+Math.abs(S.charAt(i)-S.charAt(i+1));
        }
        System.out.println(sum);
    }
}
