package codeforces;

import java.util.Scanner;
public class way_too_long {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        for(int j=0;j<T;j++)
        {
            String s=sc.next();  
            int n=s.length();
            if(n>10)
            {
            
                System.out.print(s.charAt(0));
                System.out.print(n-2);
                System.out.print(s.charAt(n-1));
                System.out.println();
            } 
            else
            System.out.println(s);

        }
        sc.close();
    }
}
