#include<iostream>
#include<unordered_map>
using namespace std;
int sliding(string s, int k){
  unordered_map<char,int>mp;
  int n = s.size();
  int count=0;

int left =0;
int maxLen =1;
for(int right=0; right<n; right++){
mp[s[right]]++;
while(mp.size() >k){
  mp[s[left]]--;
  if(mp[s[left]]==0){
    mp.erase(s[left]);
  }
  left++;

}
int freq = mp.begin()->second;
bool ok = true;
for(auto it:mp){
  if(it.second != freq){
    ok=false;
    break;
  }
  if(ok){
count++;
  }
}
}
return maxLen;
}
int main(){
  string s = "aabb";
  int k = 2;
  cout<<sliding(s,k);
  return 0;
}