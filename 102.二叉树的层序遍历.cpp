class Solution {
    vector<vector<int>> ret;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return ret;
        queue<TreeNode*> queue;
        queue.push(root);
        int depth = 0;
        while (!queue.empty()) {
            if (depth == ret.size()) {
                ret.push_back(vector<int>());
            }
            int size = queue.size();
            for (auto i = 0; i < size; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                ret[depth].push_back(node->val);
                if (node->left) 
                queue.push(node->left);
                if (node->right)
                queue.push(node->right); 
            }
            depth++;
        }
        return ret;
    }
};
