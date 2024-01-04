/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

     if(root==NULL)
     return NULL;

     if(root==p)
     return p;

     if(root==q)
     return q;


    TreeNode* lf=lowestCommonAncestor(root->left,p,q);
    TreeNode* rf=lowestCommonAncestor(root->right,p,q);

    if(lf!=NULL && rf!=NULL)
    return root;

    if(lf!=NULL && rf==NULL)
    return lf;
    else
    return rf;


    }
};