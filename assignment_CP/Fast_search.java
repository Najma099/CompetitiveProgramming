import java.util.*;
import java.util.Scanner;
public class Fast_search {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N=sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        int Q=sc.nextInt();
        for(int q=0;q<Q;q++)
        {
            int lowerBound=sc.nextInt();
            int upperBound=sc.nextInt();
            int rl=-1;
            int rr=N;
            while(rl+1<rr)
            {
                int middle=(rl+rr)/2;
                if(arr[middle]>lowerBound)
                    rl=middle;
                else
                    rr=middle;
            }
            int ll=-1;
            int lr=N;
            while(ll+1<lr)
            {
                int middle=(ll+lr)/2;
                if(arr[middle]>=upperBound)
                    ll=middle;
                else
                    lr=middle;
            }
            //int ans=(ll+1)-rr;
            //System.out.print(ans+" ");
            //System.out.print(rr+ " ") 
        }
        sc.close();
    }
}
