#include<iostream>
#include<vector>
using namespace std;
bool dfs(int node, int dest, vector<int> adj[], vector<bool>& visited){
  if(node==dest)
  return true;
  visited[node] = true;
  for(int nbr:adj[node]){
    if(!visited[nbr]){
      if(dfs(nbr, dest, adj,visited))
      return true;
    }
  }
  return true;
}
int main(){
  int n=7;
  vector<int>adj[n];
  adj[0] = {1,2};
  adj[1] = {0,3};
  adj[2] = {0,4};
  adj[3] = {1,5};
  adj[4] = {2,5};
  adj[5] = {3,4,5};
  adj[6] = {5};
  vector<bool>visited(n,false);
  int src =0;
  int dest = 6;
  cout<<dfs(src, dest,adj,visited);
  return 0;
}