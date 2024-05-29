import java.util.Scanner;

public class Shifts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); 
        while (t-- > 0) 
        {
            String s = sc.nextLine();
            long ans = 0;
            int oneCount = 0;

            for (char ch : s.toCharArray()) 
            {
                if (ch == '1') {
                    oneCount++;
                } else {
                    if (oneCount != 0)
                        ans += (oneCount + 1);
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
