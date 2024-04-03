package TLE;
import java.util.Scanner;
public class Halloumi_Boxes
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N= sc.nextInt();
            int K=sc.nextInt();
            int[] arr= new int[N];
            for(int j=0;j<N;j++)
            {
                arr[j]=sc.nextInt();
            }
            if(isAce(arr))
            System.out.println("YES");
            else if(K>1)
            System.out.println("YES");
            else if(K==1)
            System.out.println("NO");

        
        }
        sc.close();
    
    }
  public static boolean isAce(int arr[])
  {
    boolean ans=true;
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            ans=false;
            break;
        }
    }
    return ans;
 }
}
