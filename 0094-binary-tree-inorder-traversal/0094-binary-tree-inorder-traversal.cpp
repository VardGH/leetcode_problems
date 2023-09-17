/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> res;
        std::stack<TreeNode*> nodeStack;

        while (root || !nodeStack.empty()) {
            while (root) {
                nodeStack.push(root);
                root = root->left;
            }

            root = nodeStack.top();
            nodeStack.pop();

            res.push_back(root->val);
            root = root->right;
        }

        return res;
    }
};