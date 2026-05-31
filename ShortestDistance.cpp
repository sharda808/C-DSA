#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>ShortestDistence(string s, char c){
  int n = s.size();
  vector<int>ans;
  vector<int>Idx;
  for(int i=0; i<n; i++){
    if(s[i] == c){
      Idx.push_back(i);
    }
  }
  for(int i=0; i<n; i++){
    int mini = INT_MAX;
    for(int j=0; j<Idx.size(); j++){
      mini = min(mini, abs(i-Idx[j]));
    }
ans.push_back(mini);
  }
 return ans;
}
int main(){
  string s= "loveleetcode";
  char c= 'e';
  vector<int>result = ShortestDistence(s,c);
  for(int p:result){
    cout<<p<<" ";
  }
  return 0;
}