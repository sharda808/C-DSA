#include<iostream>
using namespace std;
bool isVowel(char ch){
  ch=tolower(ch);
  return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
string removeVowels(string s){
  string result = "";
  for(char ch:s){
    if(!isVowel(ch)){
      result +=ch;
    }
 
  }
  return result;
}
int main(){
  string s= "education";
  cout<<removeVowels(s);
  return 0;
}