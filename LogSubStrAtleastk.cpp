#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// int longestSubStrALlestKfreq(string s, int k){
//   int n = s.size();
//   int maxLen =0;
// for(int i=0; i<n; i++){
//   unordered_map<char, int>freq;
//   for(int j=i; j<n; j++){
// freq[s[j]]++;
// bool valid = true;
// for(auto it: freq){
//   if(it.second<k){
//     valid = false;
//   }
// }
// if(valid){
//   maxLen = max(maxLen,j-i+1);
// }
//   }
// }
// return maxLen;
// }
int oddElment(vector<int>nums){
  int count =0;
for(int i=0; i<nums.size(); i++){
  
  if(nums[i] % 2!=0){
    count++;
  }
}
return count;
}
int main(){
  // string s = "aaabc";

  // cout<<longestSubStrALlestKfreq(s,3);
  vector<int>nums = {1,2,1,1};
  cout<<oddElment(nums);
  return 0;
}