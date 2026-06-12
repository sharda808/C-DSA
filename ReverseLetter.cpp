#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string ReverseOnlyLetter(string s){
  int n = s.size();
  vector<char>letters;
vector<char>special;

  for(int i=0; i<n; i++){
    if(s[i]>='a' && s[i]<='z'){
      letters.push_back(s[i]);
    }
    else{
      special.push_back(s[i]);
    }
  }
  reverse(letters.begin(),letters.end());
  reverse(special.begin(), special.end());
  int l=0, sp=0;
  for(int i=0; i<n; i++){
    if(s[i]>='a' && s[i]<='z'){
      s[i] = letters[l++];
    }
    else{
      s[i] = special[sp++];
    }
  }
  return s;
}
int main(){
  string s= ")ebc#da@f(";
  cout<<ReverseOnlyLetter(s);
  return 0;
}