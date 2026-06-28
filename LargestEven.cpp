#include<iostream>
using namespace std;
string largestEven(string  s){
  int n= s.size();
  for(int i=n-1; i>=0; i--){
int digit = s[i] -'0';
if(digit % 2==0){
  string ans = "";
  for(int j=0; j<=i; j++){
    ans += s[j];
  }
  return ans;
}
  }
  return "";
}
int main(){
  string s= "221";
  cout<<largestEven(s);
  return 0;

}