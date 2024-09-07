import java.util.Scanner;

public class PerfectSquare {
    static boolean isPerfectSquare(int n) {
        if (n < 0 && n <= 2) {
            return false;
        }
        
        int sqrt = (int) Math.sqrt(n);
        return (sqrt * sqrt == n);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            String s = sc.next();

            if (isPerfectSquare(n)) {
                int sq = (int) Math.sqrt(n);
                int u = 0;
                boolean flag = false;

                for (int i = 0; i < sq; i++) {
                    for (int j = 0; j < sq; j++) {
                        if (i == 0 || i == sq - 1 || j == 0 || j == sq - 1) { 
                            if (s.charAt(u) == '1') {
                                u++;
                                continue;
                            } else {
                                flag = true;
                                break;
                            }
                        } else {
                            if (s.charAt(u) == '0') {
                                u++;
                                continue;
                            } else {
                                flag = true;
                                break;
                            }
                        }
                    }
                    if (flag) break;
                }

                if (flag) {
                    System.out.println("NO");
                } else {
                    System.out.println("YES");
                }
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
