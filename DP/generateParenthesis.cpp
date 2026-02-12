#include<iostream>
#include<vector>
using namespace std;
void solve(int n, int close,int open,string curr,vector<string>&result){
  if(curr.length()== 2*n){
    result.push_back(curr);
    return;
  }
  if(open<n){
    solve(n,close,open+1,curr+"(", result);
  }
  if(close<open){
    solve(n,close+1,open,curr+")",result);
  }
}
vector<string>generateParenthesis(int n){
  vector<string>result;
  solve(n,0,0,"",result);
  return result;
}
int main(){
  int n=4;
 vector<string>ans = generateParenthesis(n);
 for(string s:ans){
  cout<<s<<endl;
  return 0;
 }
}