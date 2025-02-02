class Solution {
public:
    void rec(auto it, int target, vector<int> &curr, map<int, int> &mp, vector<vector<int>> &ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (it == mp.end() || target < 0) return;

        int num = it->first;
        int freq = it->second;
        auto nextIt = next(it); 

       
        rec(nextIt, target, curr, mp, ans);

       
        for (int j = 0; j < freq; j++) {
            curr.push_back(num);
            rec(nextIt, target - num * (j + 1), curr, mp, ans);
        }

       
        for (int j = 0; j < freq; j++)
            curr.pop_back();
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        map<int, int> mp;
        for (int num : candidates) {
            mp[num]++; 
        }

        vector<int> curr;
        vector<vector<int>> ans;
        rec(mp.begin(), target, curr, mp, ans);
        return ans;
    }
};