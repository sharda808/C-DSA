#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[100][100];
// int knapsackRec(vector<int>val,vector<int>wt,int w,int n){
//   if(n==0 || w==0) {
//     return 0;
//   }
//   int itemwt = wt[n-1];
//   int itemval = val[n-1];
//   if(itemwt<=w){
//     int ans1 = knapsackRec(val,wt,w-itemwt,n-1) + itemval;
//     int ans2 = knapsackRec(val,wt,w,n-1);
//     return max(ans1,ans2);
//   }
//   else{
//     return knapsackRec(val,wt,w,n-1);
//   }
// }
// int main(){
//   vector<int>val = {15,14,10,45,30};
//   vector<int>wt = {2,5,1,3,4};
//   int w =7;
//   int n = 5;
//   cout<<knapsackRec(val,wt,w,n);
//   return 0;
// }
int knapsack(int wt[],int val[],int n,int w){
if(n==0 || w==0)
return 0;
if(dp[n][w]!=-1)
return dp[n][w];
if(wt[n-1] <=w){
  return dp[n][w] = max(val[n-1] + knapsack(wt,val,n-1,w-wt[n-1]), knapsack(wt,val,n-1,w));
}
else{
  return dp[n][w] = knapsack(wt,val,n-1,w);
}
}
int main(){
  int wt[] = {1,2,3};
  int val[] = {10,15,40};
int n = 3;
int w=5;
  memset(dp, -1, sizeof(dp)); 
cout<<knapsack(wt,val,n,w)<<endl;
return 0;
}