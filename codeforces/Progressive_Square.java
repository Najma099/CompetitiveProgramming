import java.util.*;
public class Progressive_Square {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for(int t=0;t<T;t++)
        {
            int n=sc.nextInt();
            int c=sc.nextInt();
            int d=sc.nextInt();
            int[] arr = new int[n*n];
            for(int i=0;i<n*n;i++)
            {
                arr[i]=sc.nextInt();
            }
            Arrays.sort(arr);
            int[] brr= new int[n*n];
            brr[0]=arr[0];
            for(int j=1;j<n*n;j++)
            {
               brr[j]=brr[0]+(j%3)*d+j/3*c; 
            }
            Arrays.sort(brr);
            boolean flag=true;
            for(int i=0;i<n*n;i++)
            {
                if(brr[i]!=arr[i])
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
        sc.close();
    }
}
