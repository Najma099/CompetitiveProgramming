package leetcode;

import java.util.ArrayList;
import java.util.List;

public class spiral_matrix {
    class Solution {
    public List<Integer> spiralOrder(int[][] arr) {
        int minr=0;
        int minc=0;
        int maxr=arr.length-1;
        int maxc=arr[0].length-1;
        int te=arr.length*arr[0].length;
        int count=0;
        ArrayList<Integer> spiral = new ArrayList<>();
        while(minr<=maxr && minc<=maxc)
        {
            //first row
            for(int i=minc;i<=maxc && count<te;i++)
            {
                spiral.add(arr[minr][i]);
                count++;
                
            }
            
            minr++;
            for(int j=minr;j<=maxr && count<te;j++)
            {
                spiral.add(arr[j][maxc]);
                count++;
               
            }
           // System.out.print("\n");
            maxc--;
            for(int k=maxc;k>=minc && count<te;k--)
            {
                spiral.add(arr[maxr][k]);
                count++;
                
            }
            //System.out.print("\n");
            maxr--;
            for(int m=maxr;m>=minr && count<te;m--)
            {
                spiral.add(arr[m][minc]);
                count++;
                
            }
           // System.out.print("\n");
            minc++;
        }
        return spiral;
    }
}
 
}
