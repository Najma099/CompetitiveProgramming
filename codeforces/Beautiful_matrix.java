

import java.util.Scanner;

public class Beautiful_matrix {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int[][] arr= new int [5][5];
        int centerRow = 2; 
        int centerCol = 2; 
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[0].length;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[0].length;j++)
            {
                if(arr[i][j]==1)
                {
                    sum=Math.abs(i-centerRow)+Math.abs(j-centerCol);
                }
            }
        }
        System.out.print(sum);
        sc.close();
        
    }
}
