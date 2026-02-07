#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>topoSort(int V, vector<vector<int>>&adj){
  vector<int>indegree(V,0);
  for(int u=0; u<V; u++){
    for(int v:adj[u]){
      indegree[v]++;
    }
  }
  queue<int>q;
  for(int i=0; i<V; i++ ){
    if(indegree[i]==0)
    q.push(i);
  }
  vector<int>topo;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    topo.push_back(node);
    for(int nbr:adj[node]){
      indegree[nbr]--;
      if(indegree[nbr]==0)
      q.push(nbr);
    }
  }
  return topo;
}
int main(){
  int V = 7;
  vector<vector<int>>adj(V);
  adj[0] = {1,2};
  adj[1] = {3};
  adj[2] = {3,4};
  adj[3] = {5};
  adj[5] = {6};
  adj[6] = {};
vector<int>ans = topoSort(V, adj);
for(int x: ans){
  cout<<x<<" ";
  
}
return 0;
}