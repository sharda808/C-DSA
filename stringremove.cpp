#include<iostream>
#include<unordered_map>
using namespace std;
string removeDuplicate(string s){
  unordered_map<char, int>freq;
  string ans = "";
  for(char ch:s){
    if(freq[ch]==0){
      ans +=ch;
      freq[ch] =1;
    }
  }
  return ans;

}
int main(){
  string s = "programming";
  cout<<removeDuplicate(s);
  return 0;
}