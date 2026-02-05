#include<iostream>
#include<vector>
using namespace std;
void dfs(int node, int dest, vector<vector<int>>adj, vector<bool>&onPath, vector<int>&path){
  onPath[node] = true;
  path.push_back(node);
  if(node==dest){
    for(int x:path) cout<<x <<" ";
    cout<<endl;
  }
  else{
    for(int nbr:adj[node]){
      if(!onPath[nbr]){
        dfs(nbr,dest, adj,onPath,path);
      }
    }
  }
  path.pop_back();
  onPath[node] = false;
}
int main() {
  int n=6;
  vector<vector<int>>adj(n);
  adj[5].push_back(0);
  adj[5].push_back(2);
  adj[0].push_back(3);
  adj[2].push_back(3);
  adj[3].push_back(1);
  int src=5;
  int dest = 1;
  vector<bool>onPath(n,false);
  vector<int>path;
  dfs(src, dest,adj, onPath,path);
return 0;
}
