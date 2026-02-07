#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
vector<int>djs(int V, vector<vector<pair<int, int>>>& adj, int src){
  vector<int>dist(V, INT_MAX);
  dist[src] =0;
  priority_queue<
  pair<int,int>,
    vector<pair<int,int>>,
      greater<pair<int,int>>
  >pq;
pq.push({0,src});
while(!pq.empty()){
int currDist = pq.top().first;
int node = pq.top().second;
pq.pop();
// skip oudated entry
if(currDist>dist[node]) continue;
for(auto it:adj[node]){
  int nbr = it.first;
  int wt = it.second;
  if(dist[node]+ wt<dist[nbr]){
    dist[nbr] = dist[node] + wt;
    pq.push({dist[nbr],nbr});
  }
}
}
return dist;
}
int main(){
  int V =6;
  vector<vector<pair<int,int>>> adj(V);
adj[0].push_back({1,2});
adj[1].push_back({2,4});
adj[1].push_back({3,7});
adj[2].push_back({4,3});
adj[4].push_back({3,2});
adj[4].push_back({5,5});
adj[3].push_back({5,1});
int src=0;
vector<int>dist = djs(V,adj,src);
int ans =INT_MAX;
for(int i=0; i<V; i++){
  if(i==src) continue;
  if(dist[i]==INT_MAX) return -1;
  ans = min(ans,dist[i]);
}
cout<<ans;
return 0;
}