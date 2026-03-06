#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Kthlargest(vector<int>&nums,int k){
  // int n = nums.size();
  // int first = nums[0];
  // for(int i=1; i<n; i++){
  //   if(first<nums[i]){
  //     first = nums[i];
  //   }
  // }
  // return first;
  sort(nums.begin(),nums.end(),greater<int>());
  return nums[k-1];
}
int main(){
  vector<int>nums = {3,2,1,5,6,4};
  int k =2;
 cout<<Kthlargest(nums, k);
  return 0;
}