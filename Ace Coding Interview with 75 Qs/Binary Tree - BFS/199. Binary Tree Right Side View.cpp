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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
        return res;


        queue<TreeNode*> qu;

    qu.push(root);
    while(qu.size()>0)
    {
        int count=qu.size();
        for(int i=1;i<=count;i++)
        {
            TreeNode* temp=qu.front();
            qu.pop();
            if(i==count)
            res.push_back(temp->val);

             if(temp->left!=NULL)
            qu.push(temp->left);

            if(temp->right!=NULL)
            qu.push(temp->right);

           
        }

    }
return res;
    }
};