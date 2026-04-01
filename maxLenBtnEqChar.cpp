#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxLenghtBetweenEqualCharacters(string s){
  int n = s.size();
  int maxLen =-1;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(s[i]==s[j]){
        maxLen = max(maxLen,j-i-1);
      }
    }
  }
  return maxLen == INT_MAX ? -1: maxLen;
}
int main(){
  string s = "aa";
  cout<<maxLenghtBetweenEqualCharacters(s);
  return 0;
}