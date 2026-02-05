#include<iostream>
#include<vector>
using namespace std;
void dfs(int node,vector<vector<int>>&adj, vector<bool>&vis){
  cout<<node<<" ";
  vis[node] = true;
  for(int nbr: adj[node]){
    if(!vis[nbr]){
      dfs(nbr,adj,vis);
    }
  }
}
int main(){
  int  n=10;
 vector<vector<int>>adj(n);
adj[0] = {2};
adj[1] = {6};
adj[2] = {0,5};
adj[3] = {4,7,8};
adj[4] = {3,6,9};
adj[5] = {2};
adj[6] = {1,4};
adj[7] = {3};
adj[8] = {3};
adj[9] = {4};
  vector<bool>vis(n,false);
  for(int i=0; i<n; i++){
    if(!vis[i]){
      dfs(i,adj,vis);
      cout<<endl;
    }
  }
  return 0;
}