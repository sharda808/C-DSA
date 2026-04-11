#include<iostream>
#include<vector>
using namespace  std;
int subarrayprodLessthanK(vector<int>&nums,int k){
    if(k <= 1) return 0;
  int left =0;
  int prod = 1;
  int count =0;
  int n = nums.size();
  for(int right=0; right<n; right++){
    prod *=nums[right];
  
  while(prod>=k){
    prod /= nums[left];
    left++;
  }
  count += (right-left + 1);
}
return count;

}
int main(){
  vector<int>nums = {10,5,2,6};
  int k = 100;
cout<<subarrayprodLessthanK(nums,k);
return 0;
}