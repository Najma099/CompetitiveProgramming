//Count Occurences of Anagrams
//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution {
  public:
    bool allZero(vector<int> &pattern) {
        for(int a: pattern) {
            if(a != 0) return false;
        }
        return true;
    }
    int search(string &pat, string &txt) {
        // code here
        int n = pat.size();
        int m = txt.size();
        vector< int > pattern(26,0);
        for(int i = 0; i < n; i++) {
            pattern[pat[i] - 'a']++;
        }
        
        int i = 0, j = 0;
        int ans = 0;
        
        while(j < m) {
            pattern[txt[j] - 'a']--;
            if(j - i + 1 == n) {
                if(allZero(pattern)){
                    ans++;
                }
                pattern[txt[i] - 'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};