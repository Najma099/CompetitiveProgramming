import java.util.Scanner;
public class Chess_for_three {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int t=0;t<T;t++)
        {
            int[] arr=new int[3];
            int sum=0;
            for(int i=0;i<3;i++)
            {
                arr[i]=sc.nextInt();
                sum+=arr[i];
            }
          if(sum%2 !=0)
          System.out.println(-1);
          else if(arr[0]==0)
          System.out.println(arr[1]);
          else if(arr[0] +arr[1]==arr[2])
          System.out.println(arr[2]);
          else if(arr[0] +arr[1] >arr[2])
          System.out.println(arr[2]);
          else if(arr[0]+arr[1]<arr[2])
          System.out.println(arr[0]+arr[1]);

        }
        sc.close();
    }
}
