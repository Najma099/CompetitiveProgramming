import java.util.Scanner;
public class Ropes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int[] arr= new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int l=0;
        int h=10000000;
        int count=0;
        while(l<=h){
            int mid=(l+h)/2;
            for(int i=0;i<n;i++)
            {
                count+=arr[i]/mid;
            }
            if(count==k)
                break;
            else if(count>k)
                l=mid+1;
            else
                h=mid-1;
            
        }
       // System.out.println(count);
        sc.close();
    }
}
