#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>minDiff(vector<int>&nums){
  vector<vector<int>>ans;
  sort(nums.begin(),nums.end());
  int minDiff = INT_MAX;
  for(int i=1; i<nums.size(); i++){
minDiff =  min(minDiff, nums[i]-nums[i-1]);
  }
  for(int i=1; i<nums.size(); i++){
    if(nums[i] - nums[i-1] == minDiff){
      ans.push_back({nums[i-1],nums[i]});
    }
  }
  return ans;
}
int main(){
  vector<int>nums = {4,2,1,3};
  vector<vector<int>>result = minDiff(nums);
for(auto x:result){
cout<<x[0]<<","<<x[1]<<endl;
}
return 0;
}