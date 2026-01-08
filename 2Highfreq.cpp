#include<iostream>
#include<unordered_map>
using namespace std;
char secondFrequency(string s){
  unordered_map<char, int>mp;
  int first =0, second =0;
  char ans = '#';
  for(char ch:s){
    mp[ch]++;
  }
for(auto it:mp){
  if(it.second> first){
  second = first;
  first = it.second;
  }
  else if(it.second>second && it.second<first){
  second = it.second;
  ans = it.first;
}
}
return ans;
}
int main(){
  string s="aabbbcccc";
  cout<<secondFrequency(s);
  return 0;
}