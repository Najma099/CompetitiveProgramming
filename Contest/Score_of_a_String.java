public class Score_of_a_String {
    class Solution {
        public int scoreOfString(String S) {
            int n=S.length();
            int sum=0;
            for(int i=0;i<n-1;i++)
            {
                sum=sum+Math.abs(S.charAt(i)-S.charAt(i+1));
            }
           return sum;
        }
    }
}
