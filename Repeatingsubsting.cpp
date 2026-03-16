#include<iostream>
using namespace std;
bool repeatedsubsring(string s){
  int n = s.size();
  for(int len=1; len<=n/2; len++){
    if(n%len!=0) continue;
    string piece = s.substr(0,len);
string build = "";
for(int i=0; i<n/len; i++){
  build += piece;
}
if(build==s)
return true;
  }
  return false;
}
int main(){
  string s= "ababab";
cout<<repeatedsubsring(s);
return 0;
}