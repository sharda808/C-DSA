#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int subArrayOR(vector<int>&nums){
unordered_set<int>s;
int n = nums.size();
for(int i=0; i<n; i++){
  for(int j = i+1; j<n; j++){
    int OR = 0;
    for(int k  = j+1; k<n; k++){
      OR  = OR | nums[k];
    }
    s.insert(OR);
  }
}
return s.size();
}
int main(){
  vector<int>nums = {1,2};
  cout<<subArrayOR(nums);
  return 0;
}