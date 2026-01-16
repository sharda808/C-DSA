#include<iostream>
#include<algorithm>
#include<vector>
#include <climits>
using namespace std;
pair<int,int>minDiffPair(vector<int>&arr){
  sort(arr.begin(),arr.end());
  int minDiff =INT_MAX;
pair<int, int>ans;
for(int i=0; i<arr.size()-1; i++){
  int diff = arr[i+1]-arr[i];
  if(diff<minDiff){
    minDiff = diff;
    ans={arr[i],arr[i+1]};
  }
}
return ans;
}
int main(){
  vector<int>arr = {8,3,17,15};
  pair<int,int>res = minDiffPair(arr);
cout<<res.first<<" "<<res.second;
return 0;
}