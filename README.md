# DSA_QUESTIONS
<b>Array</b> <br>
<ol>
  <li> <a href = "https://leetcode.com/problems/set-matrix-zeroes/">Set matrix zero </a></li>
  <li> <a href = "https://leetcode.com/problems/next-permutation/">Next Permutation</a> </li>
  <li><a href = "https://leetcode.com/problems/sort-colors/description/">Sort Array of 0s, 1s and 2s</a></li>
  <li><a href="https://leetcode.com/problems/maximum-width-of-binary-tree/description/"> </a></li>
  <li><a href= "https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION">  Merge two sorted array without using extra space Type 1 </a></li>
  <li><a href = "https://leetcode.com/problems/rotate-image/"> Rotate a matrix 90 degree </a></li>
  <li><a href = "https://leetcode.com/problems/find-the-duplicate-number/description/"> Find Duplicate number </a></li>
  <li><a href = "https://www.codingninjas.com/studio/problems/missing-and-repeating-numbers_6828164?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM">Repeating and Duplicate element in array </a></li>
  <li><a href ="https://leetcode.com/problems/longest-substring-without-repeating-characters/description/">Longest substring without repeat </a></li>
</ol>

<b>String</b> <br>
<b>Binary Tree</b> <br>
<ol>
  <li><a href = "https://leetcode.com/problems/maximum-width-of-binary-tree/description/">Max Width of Binary Tree</a> </li>
  <li><a href  = "https://leetcode.com/problems/binary-tree-paths/solutions/">Binary Tree Paths</a></li>
  <li><a href = "https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/">LCA(Lowest Common Ancestor)</a></li>
</ol>

<b>Heap</b> <br>
<ol>
  <li><a href = ""></a></li>
  <li><a href=""> </a></li>
</ol>
<b>Stack and Queue</b> <br>
<ol>
  <li><a href = ""></a></li>
  <li><a href=""> </a></li>
</ol>
<b>Graph</b> <br>
<ol>
  <li><a href = "https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1">DFS</a></li>
  <li><a href = "https://leetcode.com/problems/course-schedule/description/">Course Scheduling ( Topological sort )</a></li>
</ol>
<b>Sorting</b> <br>
<ol>
  <li><a href = "https://practice.geeksforgeeks.org/problems/quick-sort/1"> QuickSort </a></li>
  <li><a href=""> </a></li>
</ol>
<b>Linked List</b> <br>
<ol>
  <li><a href = "https://leetcode.com/problems/reverse-linked-list/description/"> Reverse Linkedlist </a></li>
</ol>

<b>Greedy</b><br>
<ol>
  <li> <a href = "https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#">Minimum number of platforms required for a railway</a> </li>
  <li> <a href = "https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#">Job Sequencing Problem </a></li>
</ol>

# C++ STL
<h3>Vector</h3>
vector pair&#60 int pair&#62 arr(20) ; --> creating a vector with specific size
push_back() --> push element at the end of vector <br>
size() --> returns the number of element in vector <br>
reverse(arr.begin() , arr.end()) --> reverse the vector <br>
reverse(arr.begin() + 1 , arr.end() - 1 ) --> reverse the sub part of vector <br>

<h3>Data Structures</h3> 
queue pair&#60 int pair&#60 q ; --> Creating a Queue in which each element is integer <br>
queue pair&#60 pair pair&#60 int,int pair&#62 pair&#62 q ; --> Queue of pairs <br>
q.push({1,2})    --> push pai in queue <br>

<h3> String </h3>
str.pop_back()      --> remove last element from string named str<br>
to_string( number ) --> convert a number to string <br>

<h3> Sort Vector of pair </h3> <br>
vector pair&#60 int, int pair&#62  vect; <br>
sort vector in ascending order based on first element <br>
sort(vect.begin(),vect.end()); <br>

ascending order based on second element <br>
<pre>
bool <b>decision</b>(const pair&#60int,int&#62 &a, const pair&#60int,int&#62 &b)) 
{
  return a.second < b.second; 
}
</pre> <br>
sort(vect.begin(),vect.end(),<b>decision</b>); // sort vector in ascending order based on second element


