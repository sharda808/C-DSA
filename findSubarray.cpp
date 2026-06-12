#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
bool findMaxSum(vector<int>&nums){
int n = nums.size();
unordered_set<int>st;
for(int i=0; i<n; i++){
  int sum = nums[i] + nums[i+1];
  if(st.count(sum)){
    return true; 
  }
st.insert(sum);
}
return false;
}
int main(){
  vector<int>nums = {4,2,4};
  cout<<findMaxSum(nums);
  return 0;
}