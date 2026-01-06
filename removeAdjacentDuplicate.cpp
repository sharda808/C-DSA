#include<iostream>
#include<stack>
using namespace std;
stack<char>st;
string removeAdjacentDuplicate(string s){
  for(int i=0; i<s.length(); i++){
    if(!st.empty() && st.top() == s[i]){
      st.pop();
    }
    else {
      st.push(s[i]);
    }
  }
  string result = "";
  while(!st.empty()){
    result = st.top() + result;
    st.pop();
  }
  return result;
}
int main(){
  string s= "abbaca";
  cout<<removeAdjacentDuplicate(s);
  return 0;
}