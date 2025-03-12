// the time + 1 < FireTime[i][j] was causing the problem when we r at the second last cell before entering to n- 1 && m - 1... 
// at the time even if it is time + 1 = fireTime[i][j] still it should allow the moment (Exceptional case unlike other cell)
// but the strict condition was not allowing to do so... so push everything n then check for validity!!!

                    //ESCAPE THE SPREADING FIRE (LEETCODE - 2258)

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int arr[4] = {-1, 1, 0, 0};
    int brr[4] = {0, 0, -1, 1};
    int n, m;

    bool check(int mid, vector<vector<int>>& fireTime) {
        cout << "Checking for mid = " << mid << endl;
        if (fireTime[0][0] < mid) {
            cout << "Start position (0,0) is already on fire before waiting " << mid << " time.\n";
            return false;
        }

        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> pq;
        pq.push({{0, 0}, mid});
        visited[0][0] = true;
        
        cout << "Starting BFS with initial time: " << mid << endl;

        while (!pq.empty()) {
            int i = pq.front().first.first;
            int j = pq.front().first.second;
            int time = pq.front().second;
            pq.pop();

            cout << "Visiting (" << i << ", " << j << ") at time = " << time << endl;
            

            //incorrect Code
            if (i == n - 1 && j == m - 1) {
                cout << "Reached destination (" << i << ", " << j << "). Time = " << time << ", FireTime = " << fireTime[i][j] << endl;
                return time <= fireTime[i][j];
            }

            for (int a = 0; a < 4; a++) {
                int ii = i + arr[a];
                int jj = j + brr[a];

                if (ii >= 0 && jj >= 0 && ii < n && jj < m && !visited[ii][jj] && fireTime[ii][jj] != -1 && time + 1 < fireTime[ii][jj]) {
                    visited[ii][jj] = true;
                    pq.push({{ii, jj}, time + 1});
                    cout << "Moving to (" << ii << ", " << jj << ") at time = " << time + 1 << ", FireTime = " << fireTime[ii][jj] << endl;
                }
            }

            //correct version
            // if(time >= fireTime[i][j]) continue;

            // for (int a = 0; a < 4; a++) {
            //     int ii = i + arr[a];
            //     int jj = j + brr[a];

            //     if (ii >= 0 && jj >= 0 && ii < n && jj < m && !visited[ii][jj] && fireTime[ii][jj] != -1) {
            //         visited[ii][jj] = true;
            //         pq.push({{ii, jj}, time + 1});
            //         cout << "Moving to (" << ii << ", " << jj << ") at time = " << time + 1 << ", FireTime = " << fireTime[ii][jj] << endl;
            //     }
            // }
        }

        cout << "No valid path found for mid = " << mid << endl;
        return false;
    }
};

int main() {
    Solution sol;
    sol.n = 5;
    sol.m = 5;

    vector<vector<int>> fireTime = {
        {16, -1, 2, 1 ,0 },
        {15, -1, 3, -1 ,-1},
        {14, -1, 4, 5, 6 },
        {13 ,12, -1, -1, 7},
        {12, 11, 10, 9, 8},
    };

    int mid = 0;  
    bool result = sol.check(mid, fireTime);

    cout << "Check result for mid = " << mid << " : " << (result ? "true" : "false") << endl;

    return 0;
}
