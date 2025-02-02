class Solution {
public:
    void rec(int i, int target, vector<vector<int>> &ans,  vector<int> &curr , int N, vector<int>& candidates ) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        }
        else if(target < 0 || i == N )
            return;

        rec(i + 1, target, ans, curr, N,candidates);
        curr.push_back(candidates[i]);
        rec(i,target - candidates[i], ans,curr, N ,candidates);
        curr.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        rec(0,target,ans, curr, candidates.size(),candidates);
        return ans;
    }
};