class Solution {
public:
    void rec(int idx, int n ,map < int, int> &m, vector<vector<int>> &ans , vector <int> &store, vector<int>& nums) {

        if(idx == n) {
            ans.push_back(store);
            return;
        }
        
        int freq = m[nums[idx]];
        rec(idx + freq , n, m,ans ,store,nums);
        for(int i = 0; i < freq; i++) {
            store.push_back(nums[idx]);
            rec(freq + idx , n , m, ans, store,nums);
            store.pop_back();
        }
        // for(int i = 0; i < freq; i++) {
        //     store.pop_back();
        // }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map < int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        vector < int> store;
        rec(0,nums.size(),mp,ans,store ,nums);
        return ans;
    }
};