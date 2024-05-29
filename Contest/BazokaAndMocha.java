import java.util.Scanner;

public class BazokaAndMocha {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T=sc.nextInt();
        
        for(int t=0; t<T; t++) {
            boolean flag=true;
            boolean check=true;
            int n=sc.nextInt();
            int[] arr=new int[n];
            
            for(int a=0; a<n; a++) 
            {
                arr[a]=sc.nextInt();
            }
            int splitIndex=0;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]<arr[i+1])
                    continue;
                else
                {
                    splitIndex=i+1;
                    flag=false;
                    break;
                }
            }
            for(int j=splitIndex; j<n-1; j++) 
            {
                if(arr[j] <= arr[j+1])
                    continue;
                else {
                    check=false;
                    break;
                }
            }
            if(flag && check)
            {
                if(splitIndex!=0)
                {
                    if(arr[n-1]<=arr[0])
                    System.out.println("YES");
                    else
                    System.out.println("NO");
                }
                else
                    System.out.println("YES");
            }
            else
                System.out.println("NO");
        }
        sc.close();
    }
}