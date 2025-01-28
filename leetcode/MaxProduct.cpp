class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        priority_queue< int > maxHeap, minHeap;
        for(int num:nums) {
            maxHeap.push(num);
            minHeap.push(-num);
        }
        long long a = maxHeap.top();
        for(int i = 0; i < 2; i++) {
            a *= - minHeap.top();
            minHeap.pop();
        }

        long long b = 1;
        for(int i = 0; i < 3; i++) {
            b *= maxHeap.top();
            maxHeap.pop();
        }

        //cout << a << b ;
        return max(a,b);
    }
};