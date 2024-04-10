vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
   unordered_map<int,list<int>> adjlist;
   vector<int> ans;
   unordered_map<int,bool>visited;
   for(int i=0;i<n;i++){
       for(int j=0;j<adj[i].size();j++){
           adjlist[i].push_back(adj[i][j]);
       }
   }
   
     queue<int> q1;
     q1.push(0);
     while(!q1.empty()){
         int src=q1.front();
          q1.pop();
       
          if(!visited[src]){
                 ans.push_back(src);
              visited[src]=true;
              for(auto it:adjlist[src]){
                  if(!visited[it]){
                       q1.push(it);
                  }
                    
              }
          }
            
  }
 
   return ans;

}
