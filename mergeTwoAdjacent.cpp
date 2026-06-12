#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long >mergeAdjacent(vector<int >&nums){
  int n= nums.size();
  stack<long long > st;
  vector< long long> ans;
  for(int i=0; i<n; i++){
long long cur = nums[i];
while(!st.empty() && st.top() == cur){
  cur = cur * 2;
  st.pop();

}
 st.push(cur) ; 
  }
  while(!st.empty()){
    ans.push_back(st.top());
st.pop();
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main(){
  vector<int>nums = {2,1,1,2};
vector<long long >result = mergeAdjacent(nums);
for(int x:result){
  cout<<x<<" ";

}
return 0;
}