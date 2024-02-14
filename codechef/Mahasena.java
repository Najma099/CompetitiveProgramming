import java.util.Scanner;
class Mahasena{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the value of N:");
        int N= sc.nextInt();
        System.out.print("Enter the element of array:");
        int[] arr = new int[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=sc.nextInt();
        }
        int lucky=0;
        int unlucky=0;
        for(int j=0;j<N;j++)
        {
            if(arr[j]%2==0)
            lucky++;
            else
            unlucky++;
        }
        if(lucky>unlucky)
        System.out.print("READY FOR BATTLE");
        else
        System.out.print("NOT READY");
        sc.close();
    }
}