class Solution {
public:
    void rec(int idx, vector < int> &nums, int N,vector < int> &brr,vector<vector<int>> &result) {
        if(idx == N) {
           result.push_back(brr);
           return;
        }

        rec(idx + 1, nums, N,brr,result);
        brr.push_back(nums[idx]);
        rec(idx + 1, nums, N,brr,result);
        brr.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector < int > brr;
        vector<vector<int>> result;
        rec(0,nums,nums.size(),brr,result);
        return result;
    }
};