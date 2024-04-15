import java.util.Scanner;
public class line_trip {
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
       int T=sc.nextInt();
       for(int i=0;i<T;i++)
       {
           int n=sc.nextInt();
           int[] arr= new int[n];
           int x=sc.nextInt();
           for(int j=0;j<n;j++)
           {
             arr[j]=sc.nextInt();
           }
           int max=arr[0];
           if(n==1)
           {
             System.out.println(Math.max(arr[0],(x-arr[0])*2));
           }
           else
            {
                for(int g=0;g<n-1;g++)
                {
                   max=Math.max(max,arr[g+1]-arr[g]);
                }
                
                max=Math.max(max,(x-arr[n-1])*2);
                System.out.println(max); 
            }
    }
}
}
