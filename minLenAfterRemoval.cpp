#include<iostream>
#include<unordered_map>
using namespace std;
int minLenAfterRemoval(string s){
  int n = s.size();
  unordered_map<char,int>mp;
  for(int i=0; i<n; i++){
mp[s[i]]++;
  }
  int pairs = min(mp['a'],mp['b']);
  mp['a'] -= pairs;
  mp['b'] -= pairs;
  int lenght = mp['a'] + mp['b'];
  return lenght;

}
int main(){
  string s ="aabbab";
  cout<<minLenAfterRemoval(s);
  return 0;
}