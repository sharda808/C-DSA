#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class DisjointSet {
  public:
  int n;
  vector<int>par;
  vector<int>rank;
  DisjointSet(int n){
    this->n = n;
    for(int i=0; i<n; i++){
      par.push_back(i);
      rank.push_back(0);
    }
  }
int find(int x){
  if(par[x]==x){
    return x;

  }
  return par[x] = find(par[x]);
}
void unionByRank(int a,int b){
  int parA = find(a);
  int parB = find(b);
  if(parA==parB) return;
  if(rank[parA]==rank[parB]){
    par[parB] = parA;
    rank[parA]++;
  }
  else if(rank[parA]>rank[parB]){
    par[parB] = parA;
  }
  else{
    par[parA] = parB;
 
  }
}
};
int KruskalMST(int V,vector<vector<int>>& edges){
  sort(edges.begin(), edges.end(),
         [](vector<int>& a, vector<int>& b) {
             return a[2] < b[2];
         });
DisjointSet ds(V);
int mst =0;
int edgeWt =0;
for(auto &e: edges){
  int u = e[0];
  int v = e[1];
  int wt = e[2];
  if(ds.find(u) != ds.find(v)){
    ds.unionByRank(u,v);
    mst += wt;
    edgeWt++;
    if(edgeWt == V-1)
    break;
  }
}
return mst;
}

int main(){
 int V =4;
 vector<vector<int>>edges = {
  {0,1,10},
{0,2,15},
{0,3,30},
{1,3,40},
{2,3,50,},
 };
 cout<<KruskalMST(V,edges)<<endl;
 return 0;
}
