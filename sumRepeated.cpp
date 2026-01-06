#include<iostream>
#include<unordered_map>
using namespace std;
int sumRepeatingChars(string s){
  unordered_map<char,int>freq;
for(char ch:s)
freq[ch]++;

int sum =0;
for(auto it: freq){
  if(it.second >1){
    sum+=(it.first);
  }
}
return sum;
}
int main(){
  string s="sharda";
  cout<<sumRepeatingChars(s)<<endl;
return 0;
}