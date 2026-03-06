#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
bool isIsomophoric(string s, string t){

  if(s.size() != t.size()) return false;

  unordered_map<char, char>m1,m2;
  for(int i=0; i<s.size(); i++){
char c1 = s[i];
char c2 = t[i];
 
   if(m1.count(s[i]) ==0 && m2.count(t[i])==0){
    m1[s[i]] = t[i];
m2[t[i]] = s[i];
   }
   else{
   if(m1[s[i]] != t[i] || m2[t[i]] != s[i])
   return false;
   }
}
return true;
}
int main(){
  string s= "b12";
  string t = "a22";
  cout<<isIsomophoric(s,t)<<endl;
  return 0;
}
