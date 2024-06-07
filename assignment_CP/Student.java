import java.util.Scanner;
public class Student {
   public static boolean check(long[] arr,long mid,int k)
   {
        long sum=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>mid)
                sum+=mid;
            else
                sum+=arr[i];
        }
        if(sum>=mid*k)
            return true;
        else
            return false;
   }
   public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int k=sc.nextInt();
        int n=sc.nextInt();
        long[] arr=new long[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        long low=0;
        long high=(long)1e11;
        long ans=0;
        while(low<=high)
        {
            long mid=(low+high)/2;
            if(check(arr,mid,k))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        System.out.println(ans);
        sc.close();
   } 
}
