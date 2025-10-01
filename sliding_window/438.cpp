//https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector< int > pattern(26, 0), curr(26, 0);
        int n = s.size(), m = p.size();
        vector<int> ans;
        if(n < m) return ans;
        for(int i = 0; i < m; i++) {
            pattern[p[i] - 'a']++;
        }

        //m length window
        for(int i = 0; i < m; i++) {
            curr[s[i] - 'a']++;
        }

        if(pattern == curr) ans.push_back(0);
        for(int i = m; i < n; i++) {
            //include
            curr[s[i] - 'a']++;

            //exclude
            curr[s[i - m] - 'a']--;

            //calculate
            if(curr == pattern)ans.push_back(i - m + 1);
        }
        return ans;
    }
};