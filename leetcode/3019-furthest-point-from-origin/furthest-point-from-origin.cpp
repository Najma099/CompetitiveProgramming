class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0, right = 0, blank = 0;
        for(auto &a : moves) {
            if(a == 'L') left++;
            else if(a == 'R') right++;
            else blank++;
        }
        return abs(left - right) + blank;
    }
};