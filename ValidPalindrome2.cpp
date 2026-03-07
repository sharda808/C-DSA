#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(string s){
  int st =0, end = s.size() -1;
  while(st<end){
    if(s[st] != s[end]) return false;
    st++;
    end--;
  }
  return false;
}
bool ValidPalindrome(string s){
  int l=0, r= s.size()-1;
  while(l<r){
    if(s[l] == s[r]){
      l++;
      r--;
    }
    else{
      string s1 = s;
      string s2 = s;
      s.erase(l,1);
      s.erase(r,1);
      return isPalindrome(s1) || isPalindrome(s1);
    }
  }
  return true;
}
int main(){
  string s = "abca";
cout<<ValidPalindrome(s);
return  0;
}