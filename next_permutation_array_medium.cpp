class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
      int break_point = -1; //stores the partition index of array
      
      /* Iterate from last to the front in vector and find the break point */
      for(int i = nums.size() - 2; i>=0; i--)
      {
        /* From last of vector there should be a increasing order */
        if( nums[i] < nums[i+1]) // check where the increasing order from last breaks
        {
          break_point = i ;
          // we have found the break point 
          break;
        }
      }   
      
      /* if break point is -1 then array is already the last lexographic order possible  */
      /* so we simply return the vector in reverse order */
      if( break_point == -1 )
      {
          reverse(nums.begin(),nums.end()); // reverse the vector 
          return;
      }
      /* Now we will find a element to swap at break_point index */
      for(int i = nums.size() - 1; i > break_point; i--)
      {
        /* From last of vector there should be a increasing order */
        if( nums[i] > nums[break_point]) // check where the increasing order from last breaks
        {
          /* Swap the elements */
          swap(nums[i],nums[break_point]);
          /* Reverse the right half of vector */
          reverse(nums.begin() + break_point + 1,nums.end());
          break;
        }
      } 
      return;
    }
};
