#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int UniqueInterfreq(vector<int>&nums, int k){
  int n = nums.size();
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
  mp[nums[i]]++;
}
vector<int>freq;
for(auto it:mp){
  freq.push_back(it.second);
}
int unique = freq.size();
for(int f:freq){
  if(k>=f){
    k -= f;
    unique--;
  }
  else{
    break;
  }
}
return unique;
}
int main(){
  vector<int>nums = {5,5,4};
  int k =1;
  cout<<UniqueInterfreq(nums,k);
  return 0;
}

