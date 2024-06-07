import java.util.Scanner;

public class F {
    public static boolean isSub(StringBuilder newS, String t) {
        int i = 0, j = 0;
        while(i < newS.length() && j < t.length()) {
            if(newS.charAt(i) == t.charAt(j)) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return (j == t.length());
    }
    public static boolean check(String s1, String t, int[] a, int mid) {
        StringBuilder s = new StringBuilder(s1);
        StringBuilder newS = new StringBuilder("");
        for(int i = 0; i <= mid; i++) {
            s.setCharAt(a[i], '#');
        }

        for(int i = 0 ;i < s1.length(); i++) {
            if(s.charAt(i) != '#') {
                newS.append(s.charAt(i));
            }
        }
        return isSub(newS, t);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        int[] a = new int[s.length()];

        // StringBuilder s1 = new StringBuilder(s);
        for(int i = 0 ; i < s.length(); i++) {
            a[i] = sc.nextInt();
            a[i]--;
        }
        
        int low = 0, high = s.length() - 1;
        int ans = -1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(check(s, t, a, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        System.out.println(ans + 1);
        sc.close();
    }
}
