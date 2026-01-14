#include<iostream>
#include<unordered_map>
using namespace std;
char mostfrequntchar(string s){
  unordered_map<char, int>freq;
  // step1 1: Frequency count
  for(char ch:s){
    freq[ch]++;
  }
  char ans = '{'; // '{' ASCII wise 'z' se bhi bada hota hai
  int maxFreq = 0;
  // steop 2: find max frequeny
  for(auto it:freq){
    char ch = it.first;
    int count = it.second;
    if(count>maxFreq){
      maxFreq = count;
      ans = ch;

    }
    else if(count==maxFreq){
      ans = min(ans, ch); // lexicographically smaller
    }
  }
  return ans;

}
int main(){
  string s= "aaabbbcdd";
  cout<<mostfrequntchar(s);
  return 0;
}