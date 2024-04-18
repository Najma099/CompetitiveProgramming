import java.util.Scanner;
public class odd_Queries {
    public static int modify(int[] arr,int l,int r)
    {
       if(l-2>=0)
       return arr[arr.length-1]-(arr[r-1]-arr[l-2]);
       else
       return arr[arr.length-1]-arr[r-1];
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
            for(int k=1;k<n;k++)
            {
                arr[k]=arr[k-1]+arr[k];
            }
            for(int s=0;s<q;s++)
            {
                int l=sc.nextInt();
                int r=sc.nextInt();
                int k=sc.nextInt();
                int modified_sum=modify(arr,l,r);
                modified_sum+=(r-l+1)*k;
                if(modified_sum%2!=0)
                System.out.println("YES");
                else
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
