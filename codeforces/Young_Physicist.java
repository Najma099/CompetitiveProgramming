package codeforces;

import java.util.Scanner;
public class Young_Physicist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N=sc.nextInt();
        int[][] arr=new int[N][3];
        for (int i = 0; i < N; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                arr[i][j] = sc.nextInt();
            }
        }
        int X=0;
        int Y=0;
        int Z=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(j==0)
                X+=arr[i][j];
                else if(j==1)
                Y+=arr[i][j];
                else
                Z+=arr[i][j];

            }
        }
        if(X==0 && Y==0 &&Z==0)
        System.out.println("YES");
        else
        System.out.println("NO");
        sc.close();
    }
}
