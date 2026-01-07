#include<iostream>
#include<unordered_map>
using namespace std;
char FirstNonRepeating(string s){
  unordered_map<char, int>mp;
for(char ch:s){
  mp[ch]++;
}
for(char ch:s){
  if(mp[ch]==1){
    return ch;
  }
}
return '#';
}
int main(){
string s = "aaabbc";
cout<<FirstNonRepeating(s);
return 0;
}