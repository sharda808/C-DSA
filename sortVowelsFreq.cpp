#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool isVowel(char ch){
return ch=='a' || ch== 'e' || ch=='i' || ch=='o' ||  ch=='u';
}
string sortByFreq(string s){
  int  n = s.size();
  vector<char>vec;
  unordered_map<char, int>freq;
  unordered_map<char, int>firstPos;
for(int i=0; i<n; i++){
  char ch = s[i];
  if(isVowel(ch)){
    vec.push_back(ch);
    freq[ch]++;
    if(firstPos.find(ch)== firstPos.end()){
      firstPos[ch] = i;
    }
  }
}
sort(vec.begin(), vec.end(), [&] (char a, char b){
if(freq[a] != freq[b]){
  return freq[a] >freq[b];
}
return firstPos[a] <firstPos[b];
});
int j =0;
for(int i=0; i<n; i++){
  if(isVowel(s[i])){
    s[i] = vec[j++];
  }
}
return s;
}
int main(){
  string s = "leetcode";
  cout<<sortByFreq(s);
  return 0;
}
