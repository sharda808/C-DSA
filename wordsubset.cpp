#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
  vector<string>ans;
  unordered_map<char,int>freq;
  for(string word:words2) {
  unordered_map<char,int>temp;
  for(char c:word){
    temp[c]++;
  }
  for(auto p:temp){
    freq[p.first] = max(freq[p.first], p.second);
  }
  }
for(string word:words1) {
    unordered_map<char,int>temp;
   
    for(char c:word){
        temp[c]++;
    }
 bool ok = true;
 for(auto p:freq) {
    char ch = p.first;
    int required = p.second;
    if(temp[ch]<required){
        ok = false;
        break;
    }
 }
 if(ok){
    ans.push_back(word);
 }
}
return ans;

    }
    int main () {
      vector<string>words1 =
{"amazon","apple","facebook","google","leetcode"};
vector<string>words2 =
{"e","o"};
vector<string>result = wordSubsets(words1, words2);
for(string word:result){
  cout<<word<<" ";
}

    }