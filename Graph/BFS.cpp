
class Solution {
    public:
      // Function to return Breadth First Traversal of given graph.
      vector<int> bfsOfGraph(vector<vector<int>> &adj) {
          // Code here
          vector < int > ans;
          queue < int > q;
          vector<bool> visited(adj.size(), false);
          
          q.push(0);
          visited[0] = true;
          
          while(!q.empty()) {
              
              int u = q.front();
              q.pop();
              ans.push_back(u);
              
              for(int i = 0; i < adj[u].size(); i++) {
                  
                  if(!visited[adj[u][i]]) {
                      visited[adj[u][i]] = true;
                      q.push(adj[u][i]);
                  }
              }
          }
          return ans;
          
      }
  };