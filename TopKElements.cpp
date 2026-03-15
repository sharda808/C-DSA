#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
vector<int>topKElemts(vector<int>&nums, int k){
  unordered_map<int,int>freq;
  vector<int>ans;
  for(int i=0;i<nums.size(); i++){
    freq[nums[i]]++;

  }
  priority_queue<pair<int,int>>pq;
for(auto it:freq){
  pq.push({it.second, it.first});
}
while(k--){
  ans.push_back(pq.top().second);
  pq.pop();
}
return ans;
}
int main(){
  vector<int>nums = {1,1,1,2,2,3};
  vector<int>result = topKElemts(nums,2);
  cout<<result[0]<<","<<result[1]<<endl;
  return 0;
}