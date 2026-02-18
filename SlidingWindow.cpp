#include<iostream>
#include<vector>
using namespace std;
vector<int>maxSlidingWindow(vector<int>& nums,int k){
  vector<int>ans;
  for(int i=0; i<=nums.size()-k; i++){
    int maxVal = nums[i];
    for(int j=i; j<i+k; j++){
      maxVal = max(maxVal,nums[j]);
    }
  ans.push_back(maxVal);
  }
  return ans;
}
int main(){
  vector<int>nums = {1,3,-1,-3,5,3,6,7};
 vector<int>result = maxSlidingWindow(nums,3);
 for(int x:result){
  cout<<x<<" ";
 }
 return 0;
}