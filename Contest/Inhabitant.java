
import java.util.Scanner;
import java.util.Arrays;
public class Inhabitant {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            int arr[]=new int[n];
            for(int j=0;j<n;j++)
            {
                arr[j]=sc.nextInt();
            }
            int sum=0;
            int count=0;
            if(n%2==0)
            n=n/2;
            else
            n=n/2+1;
            if(k%2==0)
            {
                for(int s=0;s<n;s++)
                {
                    if(arr[s]+sum<=k/2)
                    {
                        sum+=arr[s];
                        count++;
                    }
                    else
                    break;
                }
                sum=0;
                for(int s=n-1;s>=n;s--)
                {
                    if(arr[s]+sum<=k/2)
                    {
                        sum+=arr[s];
                        count++;
                    }
                    else
                    break;
                }
            }
            else
            {
                for(int s=0;s<n;s++)
                {
                    if(arr[s]+sum<=k/2+1)
                    {
                        sum+=arr[s];
                        count++;
                    }
                    else
                    break;
                }
                sum=0;
                for(int s=n-1;s>=n;s--)
                {
                    if(arr[s]+sum<=k/2)
                    {
                        sum+=arr[s];
                        count++;
                    }
                    else
                    break;
                }
            }
            System.out.println(count);
        }
    }
}
