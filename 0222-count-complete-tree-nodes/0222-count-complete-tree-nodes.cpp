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
        int countNodes(TreeNode* root)
        {
            if (!root)
                return 0;
    
            std::stack<TreeNode*> s;
            s.push(root);
    
            int count = 0;
            while (!s.empty()) {
                ++count;
    
                TreeNode* node = s.top();
                s.pop();
    
                if (node->left)
                    s.push(node->left);
    
                if (node->right)
                    s.push(node->right);
            }  
            return count;  
        }
    };