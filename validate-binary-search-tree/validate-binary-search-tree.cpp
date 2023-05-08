class Solution {
   long k = LONG_MIN;
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        
        bool l = isValidBST(root -> left);
        if(k >= root -> val) return false;
        k = root -> val;
        bool r = isValidBST(root -> right);
        
        return l && r;
    }
};