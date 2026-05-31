#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;
long long minDel(string s,vector<int>&cost){
  int n = s.size();
  unordered_map<char, long long>mp;
long long total =0;
  for(int i=0; i<n; i++){
total += cost[i];
mp[s[i]] +=  cost[i];
  }
  long long ans = LLONG_MAX;
for(auto it:mp){
ans = min(ans, total-it.second);
}
return ans;
}
int main(){
   string s = "aabaac";
   vector<int> cost = {1,2,3,4,1,10};
cout<<minDel(s, cost);
return 0;


}

