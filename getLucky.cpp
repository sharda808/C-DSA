#include<iostream>
using namespace std;
int getLucky(string s, int k){
  int n = s.size();
  string num = "";
  for(int i=0; i<n; i++){
num += to_string(s[i]-'a'+1);
  }
  int sum =0;
  for(int t=0; t<k; t++){
    sum =0;
    for(int j=0; j<num.size(); j++){
      sum += num[j] -'0';
    }
    num = to_string(sum);
  }
  return stoi(num);
}
int main(){
  string s = "iiii";
  int k=1;
  cout<<getLucky(s,k);
  return 0;
}
