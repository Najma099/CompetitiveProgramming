import java.util.Scanner;
public class ClosestLeft {
    public static int nearest(int[] arr,int x)
    {
        int n=arr.length;
        if(x<arr[0])
            return 0;
        else if(x>arr[n-1])
            return n;
        else
        {
            int l=0;
            int r=n-1;
            while(l<=r)
            {
                int middle=(l+r)/2;
                if(arr[middle]<x)
                    l=middle;
                else if(arr[middle]>x)
                    r=middle;
                else if(arr[middle]==x)
                {
                    r=middle;
                    break;
                }
            }
            return r;
        }
        //return
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int[] arr=new int[n];
        int[] queries=new int[k];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<k;i++)
        {
            queries[i]=sc.nextInt();
        }
        for(int i=0;i<k;i++)
        {
            int x=queries[i];
            int ans=nearest(arr,x);
            System.out.println(ans);
        }
        sc.close();
    }
}
