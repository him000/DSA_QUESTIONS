class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // when there is single element in the array then simply return
        if(low == high)
        return;
        /* pivot is ia index such that it will divide the array into two parts such that 
           all the elements to left side of pivot are small or equal to pivot
           and all the element right side of pivot are greater than pivot*/
        int pivot;
        pivot = partition(arr,low,high);
        
        // in case pivot is the first element in the array then we need to handle it
        if(low < (pivot -1 ) )
        {
          quickSort(arr,low,pivot-1);
        }
        // in case pivot is the last  element in the array then we need to handle it
        if( (pivot+1) < high )
        {
          quickSort(arr,pivot+1,high);
        }
             
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        // i index i means that at index i or smaller than i values will be smaller of equal to pivot
       int i,j;
       int pivot = arr[high]; // lets assume last element be the pivot
       i = low-1;// right we assume no element is smaller than pivot
       j=low;
       
       /*j will loop from low and go till high - 1 */
       while(j<high)
       {
           if(arr[j] < pivot )
           {
               i++;
               swap(arr[i],arr[j]);
           }
           j++;
       }
       //element at index i+1 will be higher than arr[high] or pivot so it should be present on RHS of array
       // that is why we swap it with arr[high]
       swap(arr[i+1],arr[high]);
       
       return i+1;
    }
};
