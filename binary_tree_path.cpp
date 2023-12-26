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
    void solve(TreeNode* root, string current_path, vector<string>& answer)
    {
      /* root is NULL simply return*/
      if(root == NULL)
      {
        return;
      }
      //if current node is leaf node we can store the path now and return
      if(root->left == NULL && root->right ==NULL)
      {
        current_path = current_path +  to_string(root->val);
        answer.push_back(current_path);
        return;
      }
      current_path = current_path +  to_string(root->val) + "->";
      solve(root->left,current_path,answer); // go to left subtree
      solve(root->right,current_path,answer); // go to right subtree
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string current_path ;
        vector<string> answer ; // vector to store all the path 
        solve(root, current_path,answer);
        return answer;
    }
};
