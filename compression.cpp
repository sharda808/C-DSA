#include<iostream>
using namespace std;
string Compression(string s){
  int count =1;
  string result = "";

  for(int i=0; i<s.length(); i++){
if(i< s.length()-1 && s[i]==s[i+1]){
count++;
}
else{
  result +=s[i];
  result += to_string(count);
  count =1;
}
  }
  return result;
}
int main(){
  string s= "aaabbccc";
  cout<<Compression(s);
  return 0;
}