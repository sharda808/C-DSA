#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int countComplete(string s,int k){
int n = s.size();
int ans=0;
for(int i=0; i<n; i++){
  unordered_map<int,int>mp;
  for(int j=i; j<n; j++){
    if(j>i && (abs(s[j]-s[j-1]))>2){
      break;
    }
    mp[s[j]]++;
bool ok = true;
for(auto it: mp){
  if(it.second!=k){
    ok = false;
    break;
  }
  
}
if(ok) ans++;
  }
}
return ans;
}
int main(){
  string s= "igigee";
  int k =2;
  cout<<countComplete(s,k);
  return 0;
}