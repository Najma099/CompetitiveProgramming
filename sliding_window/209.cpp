//https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, n = nums.size(), ans = 1e9;
        while(j < n) {
            sum += nums[j];
            while(sum >= target) {
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        } 
        if(ans == 1e9) return 0;
        else return ans;
    }
};