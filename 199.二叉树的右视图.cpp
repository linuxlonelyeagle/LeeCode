class Solution {
    vector<int> ret;
    void travel(TreeNode* root , int step) {
        if (root == nullptr) 
            return;
        if (ret.size() == step)
            ret.push_back(root->val);
        travel(root->right, step + 1);
        travel(root->left, step + 1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        travel(root, 0);
        return ret;
    }
};
