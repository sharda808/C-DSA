#include<iostream>
#include<vector>
using namespace std;
int countBinarySubstring(string s){
  int n = s.size();
  int total =0;
  vector<int>group;
  int count =0;
  for(int i=1; i<n; i++){
    if(s[i]==s[i-1]) {
      count++;
    }
else{
  group.push_back(count);
  count = 1;
}
  }
group.push_back(count);
for(int i=0; i<group.size(); i++){
total += min(group[i-1],group[i]);
}
return total;
  }
int main(){
  string s= "00110011";
  cout<<countBinarySubstring(s);
return 0;
}