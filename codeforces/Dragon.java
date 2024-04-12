import java.util.Scanner;
import java.util.Arrays;
public class Dragon {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        int n=sc.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
            b[i]=sc.nextInt();
        }
        Arrays.sort(a);
        boolean flag=false;
        for(int j=0;j<n;j++)
        {
            if(s>a[j])
            {
                s=s+b[j];
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
