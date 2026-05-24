#include<iostream>
#include<string>
using namespace std;
bool isdigit(char ch){
  return ch >='0' && ch<='9';
}
string replaceDigits(string s){
  int n = s.size();
  for(int i=1; i<n; i++){
    if(isdigit(s[i])){
      s[i] = s[i-1] + (s[i]-'0');
    }
  }
  return s;
}
int main(){
  string s= "a1c1e1";
  cout<<replaceDigits(s);
  return 0;
}