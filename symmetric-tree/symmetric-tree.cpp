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
    bool isSymmetric(TreeNode* root) {
        return compare(root->left,root->right);
        
    }
    bool compare(TreeNode* root1, TreeNode* root2)
    {
        if(root1!=NULL && root2!=NULL)
        {
            if(root1->val==root2->val)
                return (compare(root1->left,root2->right) && compare(root1->right,root2->left));
            else
                return false;
        }
        if((root1!=NULL && root2==NULL) || (root1==NULL && root2!=NULL))
            return false;
        
        return true;
    }
};