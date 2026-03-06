#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isAnagram(string a, string b){
  if(a.size()!=b.size()) return false;
  vector<int>freq(26,0);
for(int i=0; i<a.size(); i++){
  freq[a[i]-'a']++;
}
for(int i=0; i<b.size(); i++){
  freq[b[i]-'a']--;
}
for(int x:freq){
  if(x!=0) return false;
}
return true;
}
vector<int>findAnagram(string s, string p){
  vector<int>res;
  int n = s.size();
  int k = p.size();
for(int i=0; i<=n-k; i++){
  string sub = s.substr(i,k);
  if(isAnagram(sub,p)) {
    res.push_back(i);
  }
}
return res;
}

int main(){
  string s = "cbaebabacd";
  string p = "abc";
  vector<int>result = findAnagram(s,p);
  for(int x:result){
    cout<<x<<" " ;
  }
  return 0;
}