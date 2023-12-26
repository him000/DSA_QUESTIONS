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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
      /* if we encounter p or q or NULL simlly return */
      if(root == NULL || root == p || root == q )
      {
        return root;
      }    

      TreeNode* left  = lowestCommonAncestor(root->left, p, q); // got ot left subtree
      TreeNode* right = lowestCommonAncestor(root->right, p , q); // go to right subtree
      
      /* if node gets non null vale from left or right then current node is the ancestor 
         so simply return it */
      if(left!=NULL && right!=NULL)
      {
        return root;
      }
      /* if we have found one of the decendants then return the descendants */
      if(left == NULL)
      {
        return right;
      }
      else
      {
        return left;
      }

    }
};
