#include<iostream>
#include<vector>
using namespace std;
void buildGraph(int n, vector<vector<int>>&edges, vector<int>adj[]){
  for(auto e:edges){
    int u = e[0];
    int v= e[1];
    adj[u].push_back(v);
adj[v].push_back(u);
  }
}
void printGraph(int n, vector<int>adj[]){
  for(int i=0; i<n;i++){
    cout<<i<<" -> ";
    for(int x:adj[i]){
      cout<<x<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int  n= 5 ;// no of nodes/vertices
  vector<vector<int>> edges = {{0,1},{0,2},{1,3},{3,4}};
  vector<int>adj[n];
  buildGraph(n, edges,adj);
  printGraph(n,adj);
  return 0;
}
