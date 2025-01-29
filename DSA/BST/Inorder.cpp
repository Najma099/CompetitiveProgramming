class Solution {
public:
    void rec(TreeNode* root, vector<int> &li) {
        if(root == NULL)
            return;
        rec(root -> left,li);
        li.push_back(root -> val);
        rec(root -> right,li);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> li;
        rec(root,li);
        return li;
    }
};