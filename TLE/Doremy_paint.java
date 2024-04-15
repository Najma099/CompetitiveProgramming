import java.util.Arrays;
import java.util.Scanner;
public class Doremy_paint {
   public static void main(String[] args) {
     Scanner sc =new Scanner(System.in);
     int T=sc.nextInt();
     for(int i=0;i<T;i++)
     {
        int n=sc.nextInt();
        int[] arr=new int[n];
        boolean flag=true;
        for(int k=0;k<n;k++)
        {
            arr[k]=sc.nextInt();
        }
        Arrays.sort(arr);
        if(n==2)
           {
             System.out.println("YES");
           }
        else
        {
             int count_min=0;
             int count_max=0;
             for(int j=0;j<n;j++)
             {
                if (arr[j]== arr[0])
                {
                    count_min++; 
                } 
                else if (arr[j] == arr[n - 1]) 
                {
                    count_max++; 
                } 
                else 
                {
                    flag=false;
                    break; 
                }
             }
           if(flag==false)
           System.out.println("NO");
           else if(count_min==n || count_max==n)
           System.out.println("YES");
           else if(Math.abs(count_max-count_min)==0 ||Math.abs(count_max-count_min)==1 )
           System.out.println("YES");
           else
           System.out.println("NO");
        }
     }
   } 
}
