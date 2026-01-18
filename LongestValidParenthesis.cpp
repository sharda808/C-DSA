#include<iostream>
#include<stack>
using namespace std;
int LongestValidParenthesis(string s){
  stack<int>st;
  st.push(-1);// base Index
  int maxLen = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='('){
      st.push(i);
    }
    else{ //s[i] =')
st.pop();
if(st.empty()){
  st.push(i);
}
else{
  int Len = i-st.top();
  maxLen = max(maxLen,Len);
}
    }
  }
  return maxLen;

}
int main(){
  string s= "()(()))()";
  cout<<LongestValidParenthesis(s);
  return 0;
}