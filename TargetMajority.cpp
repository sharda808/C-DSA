#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>nums, int target){
  int n = nums.size();
  int ans =0;
  for(int i=0; i<n; i++){
    int count=0;
    for(int j=i; j<n; j++){
     if(nums[j]==target) count++;
     int len = j-i+1;
     if(count>len/ 2){
      ans++;
     }
    }
  }
  return ans;
}
int main(){
  vector<int>nums = {1,2,2,3};
  int target = 2;
  cout<<majorityElement(nums,target);
  return 0;
}