#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// int LagestSum(vector<int>&nums){
//   int maxLen = 0;
//   int n= nums.size();
//   for(int i=0; i<n; i++){
//     int sum = 0;
//     for(int j=i; j<n; j++){
// sum += nums[j];
// if(sum ==0){
//   maxLen = max(maxLen,j-i+1);
// }
//     }

//   }
//   return maxLen;
// }
int LargestSubArray0Sum(vector<int>&nums){
  unordered_map<int,int>mp;
  mp[0] = -1;
  int sum =0;
  int ans =0;
  for(int j=0; j<nums.size(); j++){
    sum += nums[j];
    
    if(mp.count(sum)){
      int currLen = j-mp[sum];
      ans = max(ans,currLen);
    }
    else{
      mp[sum] = j;
    }
  }
  return ans;
}
int main(){
  vector<int>nums = {15,-2,2,-8,1,7,10};
  cout<<LargestSubArray0Sum(nums);
  return 0;
}