class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // number of elements in array
        int N = nums.size() ;
        int answer = -1;
        int current_value; // stores the value at current index
        // We will traverse the array and store the frequency at 
        // corresponding index
        
        for (int i = 0; i < nums.size();i++)
        {
          current_value = nums[i] % N;
           
          //store the frequency at corresponding index
          nums[current_value]+=N; // we can find frequency with /N operation
          
          if(nums[current_value] / N == 2) // if frequecy becomes two this element is repeated
          {
            answer = current_value;
            break;
          }
        }

        return answer;
    }
};
