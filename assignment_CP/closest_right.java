import java.util.Scanner;
public class closest_right {
   public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    int n=sc.nextInt();
    int k=sc.nextInt();
    int[] arr=new int[n];
    int[] qrr=new int[k];
    for(int i=0;i<n;i++)
    {
        arr[i]=sc.nextInt();
    }
    for(int j=0;j<k;j++)
    {
        qrr[j]=sc.nextInt();
    }
    for(int q=0;q<k;q++)
    {
        int x=qrr[q];
        int l=-1;
        int r=arr.length;
        while(l+1<r)
        {
            int middle=(l+r)/2;
            if(arr[middle]<x)
                l=middle;
            else 
                r=middle;
        }
        System.out.println(r+1);
    }
    sc.close();
   } 
}
