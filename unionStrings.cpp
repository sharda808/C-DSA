#include<iostream>
using namespace std;
string unionStrings(string s1, string s2){
  int freq[26] = {0};
  string ans = "";
  for(char c:s1){
    if(freq[c]==0){
      ans += c;
      freq[c] = 1;
    }
  }
  for(char c:s2){
    if(freq[c]==0){
      ans +=c;
      freq[c] = 1;
    }
  }
  return ans;
}
int main(){
  string s1 ="abca";
  string s2 = "bcdd";
  cout<<unionStrings(s1,s2)<<endl;
  return 0;
}
