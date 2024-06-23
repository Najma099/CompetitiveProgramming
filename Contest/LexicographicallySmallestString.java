import java.util.*;

public class LexicographicallySmallestString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            String a = sc.next();
            int[] arr = new int[m];
            for (int i = 0; i < m; i++) {
                arr[i] = sc.nextInt();
            }
            String s = sc.next();
            
            char[] sArray = s.toCharArray();
            Arrays.sort(sArray);
            String sortedS = new String(sArray);
            
            Arrays.sort(arr);
            
            Map<Integer, Character> mp = new HashMap<>();
            int j = 0;
            for (int i = 0; i < m; i++) {
                if (!mp.containsKey(arr[i])) {
                    mp.put(arr[i], sortedS.charAt(j));
                    j++;
                }
            }
            
            StringBuilder ans = new StringBuilder();
            for (int i = 0; i < a.length(); i++) {
                int index = i + 1;
                if (mp.containsKey(index)) {
                    char smallestChar = mp.get(index);
                    ans.append(smallestChar);
                } else {
                    ans.append(a.charAt(i));
                }
            }
            
            System.out.println(ans.toString());
        }
        sc.close();
    }
}
