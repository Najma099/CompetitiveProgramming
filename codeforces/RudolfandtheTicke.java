import java.util.Scanner;
public class RudolfandtheTicke {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            int m=sc.nextInt();
            int K=sc.nextInt();
            int[] a=new int[n];
            int[] b=new int[m];
            for(int j=0;j<n;j++)
            {
                a[j]=sc.nextInt();
            }
            for(int k=0;k<m;k++)
            {
                b[k]=sc.nextInt();
            }
            int count=0;
            for(int w=0;w<n;w++)
            {
                for(int v=0;v<m;v++)
                {
                    if(a[w]+b[v]<=K)
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
