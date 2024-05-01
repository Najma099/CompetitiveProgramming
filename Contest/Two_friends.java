import java.util.Scanner;
public class Two_friends {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        for(int a=0;a<T;a++)
        {
            int N=sc.nextInt();
            boolean flag=true;
            int[] arr= new int[N];
            for(int i=0;i<N;i++)
            {
                arr[i]=sc.nextInt();
            }
            for(int j=0;j<N;j++)
            {
                int ele=arr[j];
                if(arr[ele-1]==j)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
            System.out.println(2);
            else
            System.out.println(3);
        }
        sc.close();
    }
}
