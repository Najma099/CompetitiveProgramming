import java.util.Scanner;

public class ElectionsinChefland {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int i=0;i<T;i++)
        {
            int N=sc.nextInt();
            int X=sc.nextInt();
            int[] arr=new int[N];
            int count=0;
            for(int j=0;j<N;j++)
            {
                arr[j]=sc.nextInt();
                if(arr[j]>=X)
                count++;
            }
            System.out.println(count);
        }
        sc.close();
	}
}
