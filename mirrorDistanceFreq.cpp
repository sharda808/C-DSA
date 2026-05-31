#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
char mirror(char ch){
  if(ch>='a' && ch<='z'){
    return 'a' + ('z' - ch);
  }
  return '0' + ('9' - ch);
}
 int mirrorFrequency(string s) {
  int n = s.size();
  unordered_map<char,int>freq;
  for(int i=0; i<n; i++){
char ch = s[i];
freq[ch]++;
  }
  int ans =0;
  for(char c='a'; c<='z'; c++){
    char m = mirror(c);
    if(c<m){
      ans += abs(freq[c] - freq[m]);
    }
  }
  for(char c ='0'; c<='9'; c++ ){
    char m = mirror(c);
    if(c<m){
      ans += abs(freq[c] - freq[m]);
    }
  }
  return ans;
 }

 int main(){
  string s = "ab1z9";
  cout<<mirrorFrequency(s);
  return 0;
 }