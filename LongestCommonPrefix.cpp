#include<iostream>
#include<vector>
using namespace std;
string LCP(vector<string> &strs){
  if(strs.size()==0)
  return"";
  string prefix = strs[0];
  for(int i=1; i<strs.size(); i++){
    while(strs[i].find(prefix)!=0){
      prefix = prefix.substr(0, prefix.length()-1);
      if(prefix =="")
      return "No Prefix";
    }
    

  }
  return prefix;
}
int main(){
  vector<string> strs = {"dog", "racecar", "car"};
  cout<<LCP(strs);
  return 0;
}