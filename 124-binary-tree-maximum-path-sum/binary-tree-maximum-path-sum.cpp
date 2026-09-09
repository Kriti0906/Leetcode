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
    int maxs=INT_MIN;
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l=max(0,sum(root->left));
        int r=max(0,sum(root->right));

        maxs=max(maxs,root->val+l+r);

        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        sum(root);
        return maxs;
    }
};