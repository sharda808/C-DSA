#include<iostream>
using namespace std;
string compressString(string s){
  string result = "";
  int count =1;
  for(int i=0; i<s.length(); i++){
    if(i<s.length()-1 && s[i] ==s[i+1]){
      count++;
    }else{
      result +=s[i];
      result += to_string(count);
      count =1;

    }
  }
  return result;
}
int main(){
  string s= "aaabbc";
  cout<<compressString(s);
  return 0;
}