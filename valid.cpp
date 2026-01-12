#include<iostream>
#include<stack>

using namespace std;
stack<char>st;
bool isValid(string s){
  for(char ch:s){
    if(ch=='(' || ch=='{' || ch=='['){
      st.push(ch);
    }
    else{
      if(st.empty()){
        return false;
      }
      char top = st.top();
      st.pop();
      if((ch==')' && top!='(') ||
      (ch=='}' && top!='{')||
      (ch==']' && top!='['))
      return false;
    }
  }
  return st.empty();
}
int main(){
string s="{[()]}";
cout<<isValid(s);
  return 0;
}