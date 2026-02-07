#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void dfs(int node, vector<vector<int>>&adj, vector<bool>&vis, stack<int>&st){
vis[node] = true;
for(int nbr:adj[node]){
  if(!vis[nbr]){
    dfs(nbr, adj,vis, st);
  }
}
st.push(node);
}
int main(){
  int n = 6;
  vector<vector<int>>adj(n);
  adj[5] = {0,2};
  adj[4] = {0,1};
adj[3] = {};
  adj[2] = {3};
  adj[3] = {1};
  vector<bool>vis(n,false);
  stack<int>st;
  for(int i=0; i<n; i++){
    if(!vis[i])
    dfs(i,adj,vis,st);
  }
  while(!st.empty()){
    cout<<st.top() << " ";
    st.pop();
  }
}
