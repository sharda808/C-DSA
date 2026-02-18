#include<iostream>
#include<vector>
using namespace std;
int substring(string s){
  int count =0;
  int n = s.length();
  for(int i=0; i<n; i++){
    string temp = "";
for(int j=i; j<n; j++){
  temp += s[j];
  if(temp[0]==temp[temp.length()-1])
 count++;
}
  }
  return count;
}
int main(){
  string s= "abcab";
  cout<<substring(s);
  return 0;
}