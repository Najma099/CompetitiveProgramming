import java.util.Scanner;

public class Game {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int a1 = sc.nextInt();
            int a2 = sc.nextInt();
            int b1 = sc.nextInt();
            int b2 = sc.nextInt();
            if (a1 == b1 && a2 == b2) {
                System.out.println(b2 - b1);
            } 
            else if(b1-a2 == 1)
            {
                System.out.println(1);
            }
                
            else if(a2 > b1 && a2 < b2 ){
                int x = a2 - a1;
                int y = b2 - b1;
               // System.out.println("gtsdgh");
                System.out.println(Math.min(x, y) + 2);
            }
            else if(a2 > b1 && a2 <= b2){
                int x = a2 - a1;
                int y = b2 - b1;
                int c = Math.min(x, y);
                //System.out.println("gftrff" + c);
                System.out.println(c + 1);
            }
            
        }
    }
}