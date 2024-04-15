
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
            int n=0;
            int m=0;
            if(k%2==0)
              n=k/2;
              m=k/2;
            else
              n=k/2+1;
              m=k/2;
            int count =0;
            int i=0;
            int j=n-1;
            while(i<j)
            {
                if(arr[i]>=n)
                {
                    count++;
                    n=n-arr[i]; 
                }
                else
                {
                    break;
                }
                if(arr[j]>=m)
                {
                    count++;
                    m=m-arr[j];
                }
                else
                {
                    break;
                }
            }
        }
    }
}
