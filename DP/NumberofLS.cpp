class Solution {
    public:
        int findNumberOfLIS(vector<int>& nums) {
            int n = nums.size();
            vector < int > LIS(n, 0), NIS(n,0);
            for(int i = 0; i < n; i++) {
                
                int c = 0;
                for(int j = 0; j < i; j++) {
                    if(nums[j] < nums[i]) {
                        c = max(c,LIS[j]);
                    }
                }
                LIS[i] = c + 1;
    
                int count = 0;
                for(int j = 0; j < i; j++) {
                    if(nums[j] < nums[i] && LIS[j] == c) {
                        count += NIS[j];
                    }  
                }
                NIS[i] = max(count,1);
            }
            int maxLIS = 0;
            int countLIS = 0;
            for(int i = 0; i < n; i++) {
                if(LIS[i] > maxLIS) {
                    maxLIS = LIS[i];
                }
            }
            for(int i = 0; i < n; i++) {
                if(LIS[i] == maxLIS)
                    countLIS += NIS[i];
            }
    
            return countLIS++;
        }
    };