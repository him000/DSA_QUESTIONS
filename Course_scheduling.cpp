 class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
      // array to store the in order of a vertex
      int inorder_array[numCourses];
      
      // visited array
      bool visited_array[numCourses];

      memset(inorder_array, 0, sizeof(inorder_array)); // meset array to zero 
      memset(visited_array, false, sizeof(visited_array)); // no node visited yet

      //first we will construct a adjacency list
      vector<int> adjacency_list[numCourses];
    
      // there is no depencency then return true
      if( prerequisites.size() == 0 )
      {
        return true;
      }

      // traverse the prerequisites vector to create adjacency list
      for( int i = 0; i < prerequisites.size() ; i++ )
      {
        int u , v; // edge will be directed from u to v
        u = prerequisites[i][1];
        v = prerequisites[i][0];
        //u-->v ( u is the source and v is destination vertex ) 
        adjacency_list[u].push_back(v);
        
        //since edge is from u --> v , then inorder of vertex v will be increased
        inorder_array[v]++;

      }
      
      int number_of_vertex_inserted_in_queue = 0;
      queue<int> q;
      for(int i = 0; i < numCourses ; i++ )
      { cout<<"inorder of "<<i<<" = "<<inorder_array[i]<<endl;
        if(inorder_array[i] == 0 && visited_array[i] == false )
        { cout<<"first source = "<<i<<endl;
          q.push(i);
          number_of_vertex_inserted_in_queue++;
          while( !q.empty() )
          {
            int current_node ; 
            current_node = q.front();
            visited_array[current_node] = true;
            q.pop();

            for(int i=0; i < adjacency_list[current_node].size() ; i++)
            {
              inorder_array[adjacency_list[current_node][i]]--;
              
              //order the node becomes zero then add it to queue
              if(inorder_array[adjacency_list[current_node][i]] == 0 &&  visited_array[adjacency_list[current_node][i]] == false )
              {
                q.push(adjacency_list[current_node][i]);
                number_of_vertex_inserted_in_queue++;
              }
            }
          }
          cout<<"hello : "<<number_of_vertex_inserted_in_queue <<endl;
        }
      }

      if(number_of_vertex_inserted_in_queue != numCourses )
      return false;

      return true;
      
      
        
    }
};
