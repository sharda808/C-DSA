#include<iostream>
#include<vector>
using namespace std;
bool dfs(int node,vector<vector<int>>&adj,vector<bool>&vis, vector<bool>&onPath){
  vis[node] = true;
  onPath[node] = true;
  for(int nbr:adj[node]){
    if(!vis[nbr]){
      if(dfs(nbr, adj,vis,onPath))
      return true;
    }
    else if(onPath[nbr]){
      return true;
    }
  }
  onPath[node] = false;
  return false;
}
bool hasCycle(int n, vector<vector<int>>&adj){
  vector<bool>vis(n,false);
  vector<bool>onPath(n,false);
  for(int i=0; i<n; i++){
    if(!vis[i]){
      if(dfs(i,adj,vis,onPath))
      return true;
    }
  }
  return false;
}
int main(){
  int n=4;
  vector<vector<int>>adj(n);
  adj[1] = {0};
  adj[0] = {2};
  adj[2] = {3};
  adj[3] = {1};
  cout<<hasCycle(n,adj);
  return 0;
}