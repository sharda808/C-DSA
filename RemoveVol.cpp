#include<iostream>
using namespace std;
bool isVowel(char ch){
  return ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
string remove(string s){
  int n = s.size();
  string m = "";
for(int i=0; i<n; i++){
if(isVowel(s[i])){
  continue;
}
else{
  m += s[i];
}
}
return m;
}
int main(){
  string s = "Ritu";
  cout<<remove(s);
  return 0;
}
