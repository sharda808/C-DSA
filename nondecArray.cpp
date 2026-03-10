#include<iostream>
#include<vector>
using namespace std;
bool Nondecreasing(vector<int>&nums){
  int count=0;
  for(int i=0; i<nums.size(); i++){
    if(nums[i]>nums[i+1])
count++;

    
    if(count>1) return false;
    if(i==0 ||nums[i-1]<=nums[i+1])
    nums[i] = nums[i+1];
    else
    nums[i+1] = nums[i];
  }
  return true;
}
int main(){
  vector<int>nums = {4,2,3};
  cout<<Nondecreasing(nums);
  return 0;
}