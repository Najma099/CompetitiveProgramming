import java.util.Scanner;

public class DontCount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            StringBuilder x = new StringBuilder(sc.next());
            StringBuilder y = new StringBuilder(sc.next());

            //int opr = 0;

            // while(x.length() <= 2*y.length()) {
            //     if(y.toString().contains(x.toString())) {
            //         flag = true;
            //         break;
            //     } 
            //     else {
            //         x.append(x);
            //         opr++;
            //     }
            // }
            if(x.toString().contains(y.toString())) {
                System.out.println(0);
            } else {
                    for(int j = 1; ; j++) {
                        x.append(x);
                        if(x.toString().contains(y.toString())) {
                            System.out.println(j);
                            break;
                        } else {
                            if(x.length() > 2 * y.length()) {
                                System.out.println(-1);
                                break;
                            } 
                        }
                    }
            }
            // if(flag)
            //     System.out.println(opr);
            // else 
            //     System.out.println(-1);
        }

        sc.close();
    }
}
