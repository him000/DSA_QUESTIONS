class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
      /*This solution is based on thre pointers */
      int low ,mid , high ;
      /* Lets assume below significane of above three pointers*/
      /* elements at index < low are zero */
      /* elements at index between low and mid -1 are one */
      /* elements at index > high are 2 */

      low = mid = 0; // low and mid are at zeroth index at array is unsorted for now
      high = nums.size()-1; // high will be initilased with last index
      

      /* Now we will run a loop such that mid <= high */
      while(mid <= high )
      { 
        /* if element at mid is zero */
        if(nums[mid] == 0) 
        {
          //swap mid and low elements as at index low we should have one not zero
          swap(nums[mid],nums[low]); 
          mid++;
          low++;
        }
        else if(nums[mid] == 1)
        {
          mid++;
        }
        else //if nums[mid] is 2
        {
          swap(nums[mid],nums[high]);
          high--; // decrease high as at index high does not have value 2
        }   
      }
      
      return;
    }
};
