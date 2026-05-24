#include<iostream>
#include<unordered_map>
using namespace std;
int numSplit(string s){
  int n = s.size();
  int count =0;
  unordered_map<int,int>left, right;
  for(int i=0; i<n; i++){
    right[s[i]]++;
  }
  for(int i=0; i<n; i++){
    char ch = s[i];
    right[ch]--;
    if(right[ch]==0){
      right.erase(ch);
    }
    left[ch]++;
    if(left.size() == right.size()) count++;
  }
return count;
}
int main(){
  string s= "aacaba";
  cout<<numSplit(s);
  return 0;
}