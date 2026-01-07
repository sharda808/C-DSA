#include<iostream>
#include<unordered_map>
using namespace std;
void countfrequncy(string s){
  unordered_map<char, int>value;
for(char ch:s){
  value[ch]++;
}
for(auto it:value){
  cout<<it.first<<"= "<<it.second<<endl;

}
}
int main(){
  string s= "aaabcc";
  countfrequncy(s);
  return 0;
}