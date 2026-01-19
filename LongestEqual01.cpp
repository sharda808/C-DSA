#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestEqual01(vector<int> &arr){
  unordered_map<int, int>mp;
int sum =0;
int maxLen =0;
mp[0] =-1; // sum=0 for index -1
for(int i=0; i<arr.size(); i++){
if(arr[i]==0)
sum += -1;
else
sum += 1;
if(mp.find(sum) != mp.end()){
  maxLen = max(maxLen, i-mp[sum]);
}else{
  mp[sum] = i;
}
}
return maxLen;
}
int main(){
  vector<int> arr = {0,1,1,1,0,0};
  cout<<longestEqual01(arr);
  return 0;
}