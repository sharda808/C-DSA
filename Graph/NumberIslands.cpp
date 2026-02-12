#include<iostream>
#include<vector>
using namespace std;
void dfs(int i,int j,vector<vector<bool>>& vis ,vector<vector<int>>& grid, int n,int m){
  if(i<0 || j<0 || i>=n || j>=n || vis[i][j] || grid[i][j]!='1'){
    return;
  }
  vis[i][j] = true;
  dfs(i-1,j, vis,grid,n,m);
  dfs(i,j+1,vis,grid,n,m);
  dfs(i+1,j, vis,grid,n,m);
  dfs(i,j-1,vis,grid,n,m);

}