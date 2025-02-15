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
class Solution 
{
    public:
        bool hasPathSum(TreeNode* root, int targetSum)
        {
            if (!root)
                return false;
    
            std::stack<std::pair<TreeNode*, int>> path;
            path.push({root, targetSum});
    
            while(!path.empty()) {
                auto [node, sum] = path.top();
                path.pop();
    
                if (!node->left && !node->right && node->val == sum)
                    return true;
    
                if (node->left)
                    path.push({node->left, sum - node->val});
    
                if (node->right)
                    path.push({node->right, sum - node->val});
            }
            return false;
        }
    };