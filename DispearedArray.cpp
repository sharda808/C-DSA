#include<iostream>
#include<vector>
using namespace std;
vector<int>dispeared(vector<int>&nums){
  int n = nums.size();
  vector<int>freq(n+1,0);
  vector<int>ans;
  for(int i=0; i<n; i++){
    freq[nums[i]] =1;
  }
  for(int i=1; i<=n; i++){
    if(freq[i]==0){
      ans.push_back(i);
    }
  }
  return ans;
}
int main(){
  vector<int>nums = {4,3,2,7,8,2,3,1};
  vector<int>result = dispeared(nums);
  cout<<result[0] <<","<<result[1]<<endl;
  return 0;
}