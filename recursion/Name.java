import java.util.Scanner;
public class Name {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            //N
            for(int j = 0; j < n ; j++) {
                if(j == 0 || j == n-1 || i == j)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            
            System.out.print("  "); 

            //A
            for(int j = 0; j < n ; j++) {
                if((i == 0 && (j !=  0 && j != n - 1)) || ((j == 0 || j == n - 1) && i != 0) || i == n/2)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }

            System.out.print("  "); 

            //J
            for(int j = 0; j < n; j++) {
                if(i == 0 || j == n/2 || (i - j == n/2))
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }

            System.out.print("  "); 

            //M
            for(int j = 0; j < n ; j++) {
                if(j == 0 || j == n-1 || (i == j && i <= n/2) || (i + j == n-1 && i <= n/2))
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }

            System.out.print("  "); 

            //A
            for(int j = 0; j < n ; j++) {
                if((i == 0 && (j !=  0 && j != n - 1)) || ((j == 0 || j == n - 1) && i != 0) || i == n/2)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }

            System.out.print("        ");

            //K
            for(int j = 0; j < n; j++) {
                if(j == 0 || (i + j == n/2) ||(i - j==n/2))
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            System.out.print(" "); 

            //H
            for(int j = 0; j < n; j++) {
                if(j == 0 || j == n-1 || i == n/2)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            System.out.print("  "); 

            //A
            for(int j = 0; j < n ; j++) {
                if((i == 0 && (j !=  0 && j != n - 1)) || ((j == 0 || j == n - 1) && i != 0) || i == n/2)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            System.out.print("  "); 

            //T
            for(int j = 0; j < n; j++) {
                if(i == 0 || j == n/2)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            System.out.print("  "); 

            //U
            for(int j = 0; j < n; j++) {
                if(((j == 0 || j == n-1) && (i != n-1)) || (i == n-1 && (j != 0 && j != n-1)))
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            System.out.print("  "); 

            //N
            for(int j = 0; j < n ; j++) {
                if(j == 0 || j == n-1 || i == j)
                    System.out.print("*");
                else    
                    System.out.print(" ");
            }
            
            System.out.print("  "); 

            System.out.println();
        }
    }
}
