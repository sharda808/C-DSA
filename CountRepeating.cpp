#include<iostream>
#include<unordered_map>
using namespace std;
int countReapting(string s){
  unordered_map<char, int>value;
  for(char ch:s){
    value[ch]++;

  }
  int count =0;
  for(auto it: value){
    if(it.second >1)
    count++;
  }
  return count;
}
int main(){
  string s = "aabbccd";
  cout<<countReapting(s);
  return 0;
}