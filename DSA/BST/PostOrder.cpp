class Solution {
public:
    void rec(TreeNode* root,vector <int> &li) {
        if(root == NULL)
            return;
        rec(root -> left, li);
        rec(root -> right, li);
        li.push_back(root -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector < int> li;
        rec(root,li);
        return li;
    }
};