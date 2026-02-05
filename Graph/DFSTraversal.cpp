#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void buildGraph(int n, vector<vector<int>>&edges, vector<int>adj[]){
  for(auto e: edges){
    int u = e[0];
int v = e[1];
adj[u].push_back(v);
adj[v].push_back(u);
  }
}
void dfs(int node, vector<int>adj[], vector<bool>&vis){
  vis[node] = true;
  cout<<node<<" ";
  for(int nbr: adj[node]){
    if(!vis[nbr]){
      dfs(nbr, adj,vis);
    }
  }
}
int main(){
  int n=6;
  vector<vector<int>>edges = {{1,2},{1,3},{3,4},{2,5}};
  vector<int>adj[n];
  buildGraph(n,edges, adj);
  vector<bool> vis(n, false);
  cout<<"DFS Traversal :";
  dfs(3,adj,vis);
  return 0;

}