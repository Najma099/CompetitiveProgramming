import java.util.Scanner;

public class StringGame {
    public static boolean isSubs(StringBuilder newS, String S2) {
        int i = 0, j = 0;
        while(i < newS.length() && j < S2.length()) {
            if(newS.charAt(i) == S2.charAt(j)) {
                i++;
                j++; 
            } else {
                i++;
            }
        }
        return (j == S2.length());
    }
    public static boolean check(int[] arr,int mid,StringBuilder s,String S2){
        {
            for(int i = 0; i <= mid; i++) {
                s.setCharAt(arr[i], '$');
            }
            System.out.println(s);
            StringBuilder newS = new StringBuilder("");
            for(int i = 0; i < s.length(); i++) {
                if(s.charAt(i) != '$') {
                    newS.append(s.charAt(i));
                }
            }
            return isSubs(newS, S2);
        }
        
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String S1=sc.next();
        StringBuilder s = new StringBuilder(S1);
        String S2=sc.next();
        int[] arr= new int[S1.length()];
        for(int i=0;i<S1.length();i++) {
            arr[i]=sc.nextInt();
            arr[i]--;
        }

        int low=0;
        int high=S1.length()-1;
        int ans=-1;
        while(low<=high) {
            int mid=(low+high)/2;
            System.out.println(mid);
            if(check(arr, mid, s, S2)) {
                ans = mid;
                low = mid + 1;
            }
            else{
                high=mid-1;
            }
        }
        System.out.println(ans + 1);
        sc.close();
    }
}
