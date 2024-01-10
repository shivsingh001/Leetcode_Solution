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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
        return 0;

        int max_val=INT_MIN;
        int max_lvl=0;
        int lvl=1;
        queue<TreeNode*> qu;

        qu.push(root);

        while(qu.size()>0)
        {
            int count=qu.size();
            int temp_sum=0;
           for(int i=1;i<=count;i++)
           {
               TreeNode* node=qu.front();
               qu.pop();

             temp_sum +=node->val;

              if(node->left!=NULL)
            qu.push(node->left);

            if(node->right!=NULL)
            qu.push(node->right);

           }
           if(temp_sum>max_val)
           {
               max_lvl=lvl;
               max_val=temp_sum;
           }
           lvl++;
        }

return max_lvl;
    }
};