#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>DailyTemp(vector<int>&temp){
  int n = temp.size();
  vector<int>ans(n,0);
  stack<int>st; //yaha day ka index rakhenge
  for(int i=0; i<n; i++){
  while(!st.empty() && temp[i]>temp[st.top()]){
   int prevDay = st.top();
   st.pop();
   ans[prevDay]  = i-prevDay;
  }
  st.push(i);
}
return ans;
}
int main(){
  vector<int> temp= {73,74,75,71,69,72,76,73};
  vector<int>result = DailyTemp(temp);
  for(int x:result){
    cout<< x <<" ";

  }
  return 0;
}