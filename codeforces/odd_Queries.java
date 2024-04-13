import java.util.Scanner;
public class odd_Queries {
    public static int[] prefix_sum(int[] arr)
    {
        int n=arr.length;
        int[] prefixSum = new int[n];
        prefixSum[0] = arr[0];
        for(int i=1;i<n;i++)
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        return prefixSum;
    }
    public static int[] modify(int[] arr,int l,int r,int k)
    {
        int n=arr.length;
        int[] modified = new int[n];
        for(int i=0;i<n;i++)
        {
            if(i>=l-1 && i<r)
            modified[i]=k;
            else
            modified[i]=arr[i];
        }
        return modified;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            int q=sc.nextInt();
            int[] arr=new int[n];
            for(int j=0;j<n;j++)
            {
                arr[j]=sc.nextInt();
            }
            for(int s=0;s<q;s++)
            {
                int l=sc.nextInt();
                int r=sc.nextInt();
                int k=sc.nextInt();
                int[] modified=modify(arr,l,r,k);
                int[] prefixSum = prefix_sum(modified);
                int ans=prefixSum[n-1];
                if(ans%2!=0)
                System.out.println("YES");
                else
                System.out.println("NO");
            }
        }
    }
}
