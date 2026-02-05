#include<iostream>
#include<vector>
using namespace std;
bool dfsCycle(int node,int parent,vector<vector<int>>&adj,vector<bool>&vis){
  vis[node] = true;
for(int nbr:adj[node]){
  if(!vis[nbr]){
    if(dfsCycle(nbr,node,adj,vis))
    return true;
  }
  else if(nbr != parent){
    return true;
  }
}
return false;
}
int main(){
  int n =4;
  vector<vector<int>> adj(n);
  adj[0] = {1,2};
  adj[1] = {0,2,3};
  adj[2] = {0,1};
  adj[3] = {1};
  vector<bool>vis(n,false);
  bool hasCycle = false;
  for(int i=0; i<n; i++){
    if(!vis[i]) {
      if(dfsCycle(i,-1,adj,vis)){
       hasCycle = true;
       break;
      }
    }
  }
cout<<hasCycle<<endl;
  return 0;
}