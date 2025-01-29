class Solution {
public:
    void genere(int ob, int cp, int n, vector < string> &ans, string s) {
        if(ob == n && cp == n) {
            ans.push_back(s);
            return;
        }

        if(ob < n )
            genere(ob + 1, cp,n , ans, s + '(');
        if(cp < ob)
            genere(ob, cp + 1, n , ans , s + ')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genere(0,0,n,ans, "");
        return ans;
    }
};