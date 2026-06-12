#include<iostream>
#include<unordered_set>
#include<vector>
#include<climits>
using namespace std;
int maxSum(vector<int>&nums){
int n = nums.size();
unordered_set<int>st;
int sum =0;
int mx = INT_MIN;
for(int i=0; i<n; i++){
mx = max(mx, nums[i]);
if(nums[i] >0 && ! st.count(nums[i])){
  sum += nums[i];
}
}
return sum >0 ? sum: mx;
}
int main(){
vector<int>nums = {-2,-4,-6};
cout<<maxSum(nums);
return 0;
}