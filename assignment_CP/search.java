import java.util.*;
public class search {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N=sc.nextInt();
        int[] arr=new int[N];
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
            int lower_l=0;
            int lower_h=N-1;
            int ans=N;
            while(lower_l<=lower_h)
            {
                int middle=(lower_h+lower_l)/2;
                if(arr[middle]>=lowerBound)
                {
                    ans=middle;
                    lower_h=middle-1;
                }
                else
                    lower_l=middle+1;
            }
            int Upper_l=0;
            int Upper_h=N-1;
            int result=0;
            {
                int mid=(Upper_h+Upper_l)/2;
                if(arr[mid]>upperBound)
                    Upper_h=mid-1;
                else{
                    result=mid;
                    Upper_l=mid+1;
                }
            }
            int sol=result-ans+1;
            System.out.print(sol + " ");
        }
        sc.close();
    }
}
