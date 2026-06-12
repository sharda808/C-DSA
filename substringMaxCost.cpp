#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int maxCostibsubstring(string s, string chars, vector<int>vals){
unordered_map<char,int>mp;
for(int i=0; i<chars.size(); i++){
mp[chars[i]] = vals[i];
}
vector<int>nums;
for(int i=0; i<s.size(); i++){
  if(mp.count(s[i])){
    nums.push_back(mp[s[i]]);
  }
  else{
    nums.push_back(s[i] -'a' + 1);
  }
}
int currSum =0;
int maxSum =0;
for(int i=0; i<nums.size(); i++){
  currSum += nums[i];
  maxSum = max(maxSum, currSum);
  if(currSum<0){
    currSum =0;
  }
}
return maxSum;
}
int main(){
 string s = "adaa"; 
 string chars = "d";
 vector<int> vals = {-1000};
 cout<<maxCostibsubstring(s, chars, vals);
 return 0;
}