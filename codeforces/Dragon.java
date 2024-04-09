import java.util.Scanner;
public class Dragon {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        int n=sc.nextInt();
        int a[][]=new int[n][2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        boolean flag=true;
        for(int i=0;i<n;i++)
        {
            if(s>a[i][0])
            {
                s+=a[i][1];
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
