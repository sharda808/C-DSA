#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using  namespace std;
vector<int> smallestElement(vector<int>nums){
  int n = nums.size();
  unordered_map<int,int>freq;
  for(int i=0; i<n; i++){
freq[nums[i]]++;
  }
  vector<int>distinct;
  for(auto it:freq){
distinct.push_back(it.first);
  }
  sort(distinct.begin(),distinct.end());
  int x = distinct[0];
for(int i=0; i<distinct.size(); i++){
int y = distinct[i];
if(freq[y] != freq[x]){
  return {x,y};
}
}
return {-1,-1};
}
int main(){
  vector<int>nums = {1,1,2,2,3,4};
 vector<int>result = smallestElement(nums);
 for(int x:result){
  cout<<x<<" ";
 }
  return 0;
}