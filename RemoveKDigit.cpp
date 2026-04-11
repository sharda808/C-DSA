#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
string romoveKdigit(string num, int k){
  int n = num.size();
  stack<char>st;
 for(int i=0; i<n; i++) {
  while(!st.empty() && k>0 &&  st.top()>num[i]){
    st.pop();
    k--;

  }
  st.push(num[i]);

 }
 while(k>0 && !st.empty()){
  st.pop();
  k--;
 }
 string s = "";
 while(!st.empty()){
  s +=st.top();
st.pop();
 }
 reverse(s.begin() , s.end());
int i=0;
while(i<s.size() && s[i]==0) i++;
s = s.substr(i);
return s.empty() ? "0" :s;
}
int main(){
  string num = "1432219";
  int k = 3;
cout<<romoveKdigit(num,k);
return 0;
}