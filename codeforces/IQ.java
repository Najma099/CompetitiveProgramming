import java.util.Scanner;
public class IQ {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N=sc.nextInt();
        int[] arr=new int[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=sc.nextInt();
        }
        int index=0;
        int counteven=0;
        for(int j=0;j<N;j++)
        {
            if(arr[j]%2==0)
            counteven++;
        }
        if(counteven==1)
        {
            for(int k=0;k<N;k++)
            {
                if(arr[k]%2==0)
                {
                    index=k+1;
                    break;
                }
            }
        }
        else
        {
            for(int k=0;k<N;k++)
            {
                if(arr[k]%2!=0)
                {
                    index=k+1;
                    break;
                }
            }
        }
        System.out.println(index);
        sc.close();
    }
}
