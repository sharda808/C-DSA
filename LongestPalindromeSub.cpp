#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int LCS(string s1, string s2){
  int n = s1.size();
  int m = s2.size();
  vector<vector<int>>dp(n+1, vector<int>(m+1,0));
for(int i=1; i<=n; i++){
  for(int j=1; j<=m; j++){
    if(s1[i-1] == s2[j-1]){
      dp[i][j] = dp[i-1][j-1] + 1;
    }
    else{
      dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
  }
}
return dp[n][m];
}
int longestpalindrome(string s){
  string rev = s;
  reverse(rev.begin(),rev.end());
  return LCS(s,rev);
}
int main(){
  string s= "bbbab";
  cout<<longestpalindrome(s);
  return 0;
}