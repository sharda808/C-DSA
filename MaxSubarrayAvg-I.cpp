#include<iostream>
#include<vector>
using namespace std;
double maxSubarrayAvg(vector<int>&nums, int k){
  int sum =0;
int n = nums.size();
// 1st Window
for(int i=0; i<k; i++){
  sum += nums[i];
}
int maxSum = sum;
// sliding window
for(int i=k; i<n; i++){
  sum += nums[i];
  sum -= nums[i-k];
  maxSum = max(maxSum,sum);
}
return (double) maxSum / k;
}
int main(){
  vector<int>nums = {1,12,-5,-6,50,3};
  int k = 4;
  cout<<maxSubarrayAvg(nums,k);
  return 0;
}