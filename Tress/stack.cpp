#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int studentstack(vector<int>&nums){
  int n = nums.size();
  stack<int>st;
  for(int i=0; i<n; i++){
    if(!st.empty() && st.top() == nums[i]){
      st.pop();
    }
    st.push(nums[i]);
  
}
int ans =0;
while(!st.empty()){
ans += st.top();
st.pop();
}
return ans;
}
int main(){
  vector<int>nums = {1,2,3,4,4, 3};
  cout<<studentstack(nums);
  return 0;
}
