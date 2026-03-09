#include<iostream>
#include<vector>
using namespace std;
int SmallestBlancedIndex(vector<int>&nums){
  int  n = nums.size();
  vector<long long> rightP(n,1);
  for(int i=n-2; i>=0; i--){
    rightP[i] = rightP[i+1] * nums[i+1];
  }
  long long sum =0;
  for(int i=0; i<n; i++){
    if(sum == rightP[i])
    return i;
    sum += nums[i];
  }
  return -1;
}

int main(){
  vector<int>nums = {2,1,2};
  cout<<SmallestBlancedIndex(nums);
  return 0;
}
