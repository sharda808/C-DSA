#include<iostream>
#include<vector>

using namespace std;
vector<int>rotateElemnt(vector<int>&nums, int k){
  int n= nums.size();
  vector<int>pos;
  for(int i=0; i<n; i++){
    if(nums[i]>=0){
  pos.push_back(nums[i]);
    }
  
  }
  int m = pos.size();
  if(m==0) return nums;
  k = k%m;
rotate(pos.begin(), pos.begin(()+k , pos.end());
for(int i=0; i<nums.size(); i++){

}
}