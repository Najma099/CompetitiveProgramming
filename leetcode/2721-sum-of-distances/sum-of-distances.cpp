class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        //i need element as well as their index so element n corresponding all the idx
       

        map<int, vector<int>> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(nums.size());
        //1 -> 0, 2, 3 4 (3 - 2)+ (4 - 2)
        // 3 -> 1
        // 2 -> 4
        for(auto &a: mp) {
            // left side is prefix sum  0 2 
            // right side is prefix sum  5 1.  1 2 3 5 (4 - 1 - 1)

            int ele = a.first;
            vector<int> &idx = a.second;
            int size = idx.size();

            vector<long long> prefix(size);
            prefix[0] = idx[0];

            for(int i = 1; i < size; i++) {
                prefix[i] = prefix[i - 1] + idx[i];
            }

            for(int i = 0; i < size; i++) {
                long long left = 0;
                long long right = 0;

                if(i > 0) {
                    left = (long long)idx[i] * i - prefix[i - 1];
                }
                
                if(i < size - 1) {
                    right = -((long long)idx[i] * (size - i - 1)) + (prefix[size - 1] - prefix[i]);
                }
                ans[idx[i]] = left + right;
            }

        }
        return ans;
    }
};