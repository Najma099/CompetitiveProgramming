class Solution {
    public:
        vector < vector < int > > dp;
        vector < int > prefix;
        int rec(int i, int j, string& s, string& p) {
    
            if(i < 0 && j < 0) return 1;
            if(j < 0) return 0;
            if(i < 0) return prefix[j] - 1 == j; 
    
            if(dp[i][j] != -1) return dp[i][j];
    
            if(s[i] == p[j]) return dp[i][j] = rec(i - 1, j - 1, s, p);
            else {
                if(p[j] == '?') return dp[i][j] = rec(i - 1, j - 1, s, p);
                else if(p[j] == '*') return dp[i][j] = rec(i - 1, j, s, p) | rec(i , j - 1, s, p);
                else return dp[i][j] = 0;
            }  
        }
        bool isMatch(string s, string p) {
            prefix.resize(p.size(),0);
            dp.resize(s.size(),vector < int > (p.size(), -1));
            if(p.size() != 0 && p[0] == '*') prefix[0] = 1;
            for(int i = 1; i < p.size(); i++) {
                prefix[i] = prefix[i - 1] + (p[i] == '*');
            }
            return rec(s.size() - 1, p.size() - 1, s, p);
        }
    };