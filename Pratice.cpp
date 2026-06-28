#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
// string reverse(string s){
//   int n = s.size();
// int i=0, j=n-1;
// while(i<j){
//   swap(s[i], s[j]);
//   i++;
//   j--;
// }
// return s;
// }
int maxFreq(vector<int>nums){
// int n =s.size();
// unordered_map<int,int>mp;
// for(int i=0; i<n; i++){
//   mp[s[i]]++;
// }
// int oddCount =0;
// for(auto it:mp){
//   if(it.second % 2==1){
// oddCount++;
//   }
  
// }
// return max(0, oddCount-1);
int n = nums.size();
unordered_map<int,int>freq;
for(int i=0; i<n; i++){
freq[nums[i]]++;
}
int maxFreq = 0;
int ans =-1;
for(auto it:freq){
  if(it.second>maxFreq){
    maxFreq = it.second;
    ans = it.first;

  }
  
}
return ans;
}
int  main(){
vector<int>nums = {1,2,2,3,1,4,2};
 cout<<maxFreq(nums);
  return 0;

}