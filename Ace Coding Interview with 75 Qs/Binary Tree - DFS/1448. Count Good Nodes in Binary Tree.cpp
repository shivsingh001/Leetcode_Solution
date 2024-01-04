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

void solve(TreeNode* root,int &count, int m_val)
{
    if(root==NULL)
    return;

   if(root->val>=m_val)
   {
       count++;
       m_val=root->val;
   }

   solve(root->left,count,m_val);
   solve(root->right,count,m_val);

   return;

}

    int goodNodes(TreeNode* root) {
        if(root==NULL)
        return 0;

        int count=1;

    solve(root->left,count,root->val);
    solve(root->right,count,root->val);
     
        return count;
    }
};