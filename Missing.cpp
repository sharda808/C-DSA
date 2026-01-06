#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> &nums){
  int n = nums.size();
  int expected = n * (n+1) / 2;
  int sum =0;
  for(int num : nums){
    sum +=num;
  }
  return expected-sum;
}
int main(){
  vector<int>nums = {4,0,1,2};
  cout<<missingNumber(nums)<<endl;
  return 0;
}