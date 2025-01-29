
class Solution {
public:
   void rec(TreeNode* root,  vector<int> & ans) {
        if(root == NULL) {
            return ;
        }
        ans.push_back(root->val);
        rec(root->left,ans);
        rec(root->right,ans);
        return ;
   }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        rec(root,ans);
        return ans;
    }
};