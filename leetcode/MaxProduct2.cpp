class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue< int > maxHeap;
        for(int num:nums) {
            maxHeap.push(num);
        }
        
        int a = 1;
        for(int i = 0; i < 2; i++) {
            a *= (maxHeap.top() - 1);
            maxHeap.pop();
        }
        return a;
    }
};