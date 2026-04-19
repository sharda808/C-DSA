#include<iostream>
#include<string>
using namespace std;
bool isSubstring(string a, string b){
  int n = a.size();
int m = b.size();
for(int i=0; i<n-m; i++){
  int j =0;
  while(j<m && a[i+j]==b[j]){
    j++;
  }
  if(j==m) return true;
}
return false;
}
bool Rotatestring(string s, string goal){
  if(s.size() != goal.size()){
    return false;
  }
  string temp = s+s;
  if(isSubstring(temp,goal)){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  string s = "abcde";
  string goal = "cdeab";
cout<<Rotatestring(s,goal);
return 0;
}