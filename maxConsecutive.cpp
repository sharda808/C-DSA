#include<iostream>
#include<vector>
using namespace std;
int maxConsecutive(vector<int>&nums){
  int n = nums.size();
  int Count=0;
  int maxCount =0;
  for(int i=0; i<n; i++){
    if(nums[i]==1){
      Count++;
      maxCount = max(maxCount,Count);
      
    }
    else{
      Count=0;
    }
  }
  return maxCount;
}
int main(){
  vector<int>nums = {1,1,0,1};
  cout<<maxConsecutive(nums);
  return 0;
}