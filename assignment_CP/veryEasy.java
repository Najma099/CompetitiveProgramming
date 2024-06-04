import java.util.Scanner;
public class veryEasy {
    public static boolean check(long ans,long n)
    {
        return ans >= n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int x=sc.nextInt();
        int y=sc.nextInt();
        long low=0;
        long high=200000000;
        long res=1;
        while(low<=high)
        {
            long mid=low + (high - low)/2;
            Long ans=(mid/x) + (mid/y) +1;
            //long res=0;
            if(check(ans,n))
            {
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        System.out.println(res + Math.min(x, y));
        sc.close();
    }
}
