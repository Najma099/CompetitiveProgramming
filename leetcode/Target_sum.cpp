class Solution {
    public:
        vector<vector<int>> dp;
    
        int rec(int i, int k, int target, vector<int>& nums) {
            if (i < 0) return k == target;  
            if (dp[i][k + 1000] != -1) return dp[i][k + 1000];  
            return dp[i][k + 1000] = rec(i - 1, k + nums[i], target, nums) + rec(i - 1, k - nums[i], target, nums);
        }
    
        int findTargetSumWays(vector<int>& nums, int target) {
    
            dp.resize(nums.size(), vector<int>(2001, -1));  
            return rec(nums.size() - 1, 0, target, nums);
        }
    };
    