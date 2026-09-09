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
    int level(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int sum,level=0;
        queue<TreeNode*>q;
        q.push(root);
        sum=INT_MIN;
        int minl=1;
        while(q.size()>0){
            level++;
            int n=q.size();
            int s=0;
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                s+=curr->val;
                q.pop();
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
            if(sum<s){
                sum=s;
                minl=level;
            }
        }
        return minl;
    }
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        return level(root);
    }
};