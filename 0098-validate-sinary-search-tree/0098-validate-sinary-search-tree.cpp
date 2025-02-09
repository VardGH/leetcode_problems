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
    void inorderTraverse(std::vector<int>& vec, TreeNode* root)
    {
        if (!root)
            return;

        inorderTraverse(vec, root->left);
        vec.push_back(root->val);
        inorderTraverse(vec, root->right);
    }

    bool isValidBST(TreeNode* root)
    {
        std::vector<int> elems;
        inorderTraverse(elems, root);

        for (int i = 0; i < elems.size() - 1; ++i) {
            if (elems[i] >= elems[i + 1]) {
                return false;
            }
        }
        return true;
    
    }
};