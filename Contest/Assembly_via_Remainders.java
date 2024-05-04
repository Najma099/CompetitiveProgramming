import java.util.Scanner;
public class Assembly_via_Remainders {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            int[] a=new int[n-1];
            for(int j=0;j<n-1;j++)
            {
                a[j]=sc.nextInt();
            }
            int[] b=new int[n];
            b[n-1]=a[n-2];
            b[n-2]=1000000000;
            int s=b[n-2];
            for(int k=n-3;k>=0;k--)
            {
                b[k]=s-a[k];
                s=s-a[k];
            }
            for(int u=0;u<n;u++)
            {
                System.out.print(b[u] +" ");
            }
            System.out.println();  
        }
        sc.close();
    }
}
