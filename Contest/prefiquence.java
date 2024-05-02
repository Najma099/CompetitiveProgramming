import java.util.Scanner;
public class prefiquence {
   public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=sc.nextInt();
        int m=sc.nextInt();
        String a= sc.next();
        String b=sc.next();
        int count=0;
        int p=0;
        int q=0;
        while(p < n && q < m) 
        { 
            if(a.charAt(p) == b.charAt(q)) 
            {
                count++;
                p++; 
            }
            q++; 
        }
        System.out.println(count);
    }
    sc.close();
   } 
}
