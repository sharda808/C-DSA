#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int maxAbsent(vector<int>&nums){
  int n = nums.size();
  int sum =0;
  unordered_set<int>st;
  for(int i=0; i<n; i++){
    st.insert(nums[i]);
    sum += nums[i];
  }
    int ans = max(1, sum / (int) nums.size() + 1);
    while(st.count(ans)){
      ans++;
    }
    return ans;
  }
  int main(){
    vector<int>nums = {3,5};
    cout<<maxAbsent(nums);
    return 0;
  }
