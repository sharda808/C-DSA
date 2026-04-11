#include<iostream>
#include<vector>
#include<unordered_map>
using  namespace std;
string customSortString(string order, string s){
  string ans = "";
  unordered_map<char, int>freq;
  for(int i=0; i<s.size(); i++){
    freq[s[i]]++;
  }
  for(int i=0; i<order.size(); i++){
    while(freq[order[i]]>0){
ans += order[i];
freq[order[i]]--;
    }
  }
  for(auto it:freq){
    while(it.second>0){
      ans += it.first;
      it.second--;
    }
  }
  return ans;
}
int main(){
  string order = "cba", s = "abcd";
  cout<<customSortString(order,s)<<endl;
  return 0;
}