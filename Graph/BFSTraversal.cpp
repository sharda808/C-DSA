#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void buildGraph(int n, vector<vector<int>>edges, vector<int>adj[]){
  for(auto e: edges){
    int u= e[0];
    int v = e[1];
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
}
void bfs(int start, int n, vector<int>adj[]){
  vector<bool>vis(n,false);
  queue<int>q;
vis[start] = true;
q.push(start);



while(!q.empty()){
  int node = q.front();
  q.pop();
  cout<<node<<" ";
  for(int neigh:adj[node]){
    if(!vis[neigh]){
      vis[neigh] = true;
      q.push(neigh);
    }
  }
}
}

int main(){
    int  n= 5 ;// no of nodes/vertices
  vector<vector<int>> edges = {{0,1},{0,2},{1,3},{3,4}};
  vector<int>adj[n]; 
  buildGraph(n,edges, adj);
  bfs(0,n,adj);
  return 0;
}