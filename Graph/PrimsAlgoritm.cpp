#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int primeMST(int V, vector<vector<pair<int,int>>> &adj){
  vector<int>key(V,INT_MAX);
  vector<bool>Mst(V, false);
  priority_queue<
  pair<int,int>,
  vector<pair<int,int>>,
  greater<pair<int,int>>
  >pq;
  key[0] =0;
pq.push({0,0});
int cost =0;
while(!pq.empty()){
  int wt = pq.top().first;
  int node = pq.top().second;
  pq.pop();
  if(Mst[node]) continue;
  Mst[node] = true;
  cost += wt;
for(auto it: adj[node]){
  int nbr = it.first;
  int edgewt = it.second;
  if(!Mst[nbr] && edgewt<key[nbr]){
    key[nbr] = edgewt;
    pq.push({key[nbr],nbr});
  }
}
}
return cost;
}
int main(){
  int V =4;
  vector<vector<pair<int,int>>> adj(V);
  adj[0].push_back({1,10});
adj[1].push_back({3,40});
adj[0].push_back({2,15});
adj[2].push_back({0,15});
adj[2].push_back({3,50});
adj[0].push_back({3,30});
adj[3].push_back({1,40});
adj[3].push_back({2,50});
cout<<primeMST(V,adj);
return 0;

}