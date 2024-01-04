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

void solve(TreeNode* root,vector<int> &r)
{
    if(root==NULL)
    return;
    
    if(root->left==NULL && root->right==NULL)
    {
        r.push_back(root->val);
        return;
    }

    solve(root->left,r);
    solve(root->right,r);

    return ;
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1,r2;
        solve(root1,r1);
        solve(root2,r2);

   int n= max(r1.size(),r2.size());

   for(int i=0;i<n;i++)
   {
       if(r1[i]!=r2[i])
       return false;
   }
   return true;
    }
};