#include<iostream>
#include<unordered_map>
using namespace std;
int stable(string s){
  int n = s.size();
  int count =0;

  for(int i=0; i<n; i++){
  unordered_map<char,int>mp;
    for(int j=i; j<n; j++){
      mp[s[j]]++;
if(j-i+1 <2){
  continue;
}
  
 int freq = mp.begin()->second;
 bool ok = true;
 for(auto it: mp){
  if(it.second != freq){
   ok= false;
   break;
  }
}
if(ok) {
  count++;
}
 }
 
}
  
return count;
}
int main(){
  string s = "aabb";
  cout<<stable(s);
  return 0;
}