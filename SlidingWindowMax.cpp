#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int>SlidingWindowmax(vector<int>&nums, int k){
  priority_queue<pair<int,int>>pq;
  vector<int>ans;
  // 1st window
  for(int i=0; i<k; i++){
    pq.push({nums[i],i});

  }
ans.push_back(pq.top().first);
for(int i=k; i<nums.size(); i++){
  while(!pq.empty() && pq.top().second <= i-k){
    pq.pop();
  }
  pq.push({nums[i],i});
  ans.push_back(pq.top().first);
}
return ans;
}
int main(){
  vector<int>nums = {1,3,-1,-3,5,3,6,7};
  int k =3;
  vector<int>result = SlidingWindowmax(nums,k);
  for(int x:result){
    cout<<x<<" ";
  }
  return 0;
}