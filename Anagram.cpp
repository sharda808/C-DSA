#include<iostream>
#include<vector>
using namespace std;
bool isAnagram(string s, string t){
if(s.length()!=t.length())
return false;
int freq[26] = {0};
for(char c: s)
freq[c - 'a']++;

for(char c: t){
freq[c - 'a']--;
if(freq[c-'a']<0)
return false;
}
return true;
}
int main(){
  string s= "cat";
  string t = "rat";
  if(isAnagram(s,t))
  cout<<"Angram";
  
  else
  cout<<"Not Anagram";
  return 0;
}