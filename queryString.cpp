#include<iostream>
using namespace std;
string ToBinary(int n){
  string res = "";
  for(int i=31; i>=0; i--){
    if(n & (1<<i)){
      res += "1";
    }
    else{
      res += "0";
    }
  }
  int i=0; 
  while(i< res.size() && res[i] == '0') i++;
  return res.substr(i);
}
bool queryString(string s, int n){
  for(int num = 1; num<=n; num++){
    string bin = ToBinary(num);
    int p= s.size();
    int m  = bin.size();
    bool found = false;
    for(int i=0; i<=p-m ; i++){
      int j=0;
      while(j<m && s[i+j] == bin[j]){
        j++;
      }
      if(j==m){
        found = true;
        break;

      }
    }
if(!found) return false;
  }
  return true;
}
int main(){
  string s= "0110";
  int n = 3;
  cout<<queryString(s,n);
  return 0;
}