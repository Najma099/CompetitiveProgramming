//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        queue< int > q;
        vector< int > ans;
        int i = 0, j = 0, n = arr.size();
        while(j < n) {
            if(arr[j] < 0) q.push(arr[j]);
            if(j - i + 1 == k) {
                if(!q.empty()) {
                    ans.push_back(q.front());
                    if(q.front() == arr[i]) {
                        q.pop();
                    }
                } else {
                    ans.push_back(0);
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};