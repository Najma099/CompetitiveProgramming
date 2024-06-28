import java.util.Scanner;
public class teamss {
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int[] arr= new int[3];
            for(int k=0;k<3;k++)
            {
                arr[k]=sc.nextInt();
                sum+=arr[k];
            }
            if(sum>=2)
            count++;
        }
        System.out.println(count);
        sc.close();
    }
    
}
