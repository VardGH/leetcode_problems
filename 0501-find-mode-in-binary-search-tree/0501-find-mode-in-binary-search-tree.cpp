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

    vector<int> findMode(TreeNode* root)
    {
        inorder(root);

        int max_mode = -1;
        for (auto& elem : mode_map) {
            max_mode = std::max(max_mode, elem.second);
        }

        std::vector<int> res;
        for (auto& elem : mode_map) {
            if (max_mode == elem.second) {
                res.push_back(elem.first);
            }
        }
        return res;
    }

private:
    void inorder(TreeNode* root)
    {
        if (!root)
            return;
        
        inorder(root->left);
        ++mode_map[root->val];
        inorder(root->right);
    }

    std::unordered_map<int, int> mode_map;
};
