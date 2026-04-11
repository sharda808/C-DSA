#include<iostream>
#include<string>
using namespace std;
bool isVowels(char ch){
  return (ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u');
}
int maxVowels(string s,int k){
  int count =0;
  int n = s.size();
  for(int i=0; i<k; i++){
if(isVowels(s[i])){
  count++;
}
  }
  int maxCount = count;
  for(int i=k; i<n; i++){
    if(isVowels(s[i])) count++;
    if(isVowels(s[i-k])) count--;
  maxCount = max(maxCount,count);
  }
return maxCount;
}

int main(){
  string s=  "leetcode";
  int k = 3;
  cout<<maxVowels(s,k);
  return 0;
}