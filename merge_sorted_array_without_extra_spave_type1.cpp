void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
	// we will have two pointer left and right;
	int left = a.size()-1; // left will point to largest elemnt in a
	int right = 0; // right will point to samallest elemen in b
  
  // we know that a sorted array can be divided into two arrays one array 
  // contains all the smaller element while second array contain the larger element
  // loop will run till left or right are out of bound
	while( left >=0 && right < b.size() ) 
	{
    if(a[left] > b[right]) // we are trying to replace all the smaller element fromt the second array to first array .
	  {
      swap(a[left],b[right]);
		  left--;
		  right++;
	  }
	  else
	  {
      break;
	  }

	}
  // sort both the array indepedently
	sort(a.begin(),a.end()); 
	sort(b.begin(),b.end()); 

}
