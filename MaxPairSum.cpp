#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int MaxPairSum(vector<int>&arr,int k){
  int n= arr.size();
  
  sort(arr.begin(),arr.end());
  int ans =-1;
  for(int i=0; i<n-1; i++){
    if(arr[i+1]-arr[i]<k){
     ans = max(ans, arr[i]+arr[i+1]); 
    }
  }
  return ans;
}
int main(){
  vector<int>arr = {2,4,6,8,10};
  int k=3;
  cout<<MaxPairSum(arr,k);
  return 0;
}