import java.util.Scanner;
public class BinaryPacking {
    public static boolean check(long mid, long n,long w,long h)
    {
        return (mid/w) * (mid/h)>=n;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        long w=sc.nextLong();
        long h=sc.nextLong();
        long n=sc.nextLong();
        
        long high=1;
        while(check(high,n,w,h)==false)
        {
            high=high*2;
        }
        //long high = (long) Math.ceil(Math.sqrt((double) n * w * h));
        Long low = 0L;
        long ans = high;
        while(low<=high)
        {
            long mid=(low+high)/2;
            if(check(mid,n,w,h))
            {
                ans= mid;
                high=mid-1;
            }
            else
                low=mid+1;
            //System.out.println(mid);
        }
        System.out.println(ans);
        sc.close();
    }
}
