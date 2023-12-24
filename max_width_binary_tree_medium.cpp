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
    int widthOfBinaryTree(TreeNode* root) {
        /* Here we will do level order traversal, hence we need a queue  */
        /* Here we have queue of pair first element of pair id the node itself and scond element is index */
        queue< pair<TreeNode*,int> > q;
        /* Store index of left most and right most element */
        long long int left_most = 0,right_most = 0;
        /* smallest index in current level*/
        long long int curr_min = 0;
        long long int max_width = -1;
        q.push({root,0});

        while(!q.empty())
        {
          curr_min = q.front().second;
          int no_of_nodes_in_queue = q.size();
          /* Loop to traverse nodes on same level */
          for(int i = 1; i <= no_of_nodes_in_queue ; i++)
          {
              //store left most node index
              if(i == 1)
              left_most = q.front().second;
              
              //store right most node index
              if(i == no_of_nodes_in_queue)
              right_most = q.front().second;
              
              //check if left child exits or not
              if(q.front().first->left != NULL )
              q.push( {q.front().first->left , ( 2 * (q.front().second - curr_min ) )  + 1 }); 
              
              //check if right child exists or not
              if(q.front().first->right != NULL )
              q.push( {q.front().first->right , ( 2 * (q.front().second - curr_min ) )  + 2 }); 
              
              //pop the current node from the queue
              q.pop();
          }
          
          cout<<left_most<<" "<<right_most<<endl;
          max_width = max(max_width , right_most - left_most );

        }

        return max_width + 1;

    }
};
