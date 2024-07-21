import java.util.Scanner;
public class Chemistry {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] freq = new int[26];

            String s = sc.next();
            
            
                for(int i = 0; i < n; i++) {
                    int idx = s.charAt(i) - 'a';
                    freq[idx]++;
                }
                int count = 0;
                for(int j = 0; j < 26 ; j++) {
                    if(freq[j] % 2 != 0)
                        count++;
                }
                
                //System.out.println(count);
                if(count == k)
                    System.out.println("YES");

                
                else if(k <= count) {

                    if(count - k == 0 || count - k == 1 )
                        System.out.println("YES");
                    else
                        System.out.println("NO");
                }
                else {
                    System.out.println("YES");
                    
                 }
                
            }
            sc.close();
        }
    }

