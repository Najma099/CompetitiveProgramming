//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<vector<int>>& adj,vector < bool > &visited , int i,vector<int> &ans) {
        visited[i] = true;
        ans.push_back(i);
        for(int j = 0; j < adj[i].size();j++) {
            if(!visited[adj[i][j]]) {
                dfs(adj,visited,adj[i][j],ans);
            }
        }
        return;
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector < bool > visited(adj.size(),false);
        vector<int> ans;
        dfs(adj,visited,0,ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends