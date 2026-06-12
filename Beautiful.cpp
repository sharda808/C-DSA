#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isVowels(char ch){
  return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
int countBinary(string s,int k){
  int n = s.size();
  int count =0;
  for(int i=0; i<n; i++){
    int vowels =0;
    int consonant =0;
    for(int j=i; j<n; j++){
      if(isVowels(s[j])) vowels++; 
else
consonant++;
if(vowels == consonant){
  int x = vowels;
  if((x* x) % k==0) {
    count++;
  }
}
          }
  }
  return count;
}
int main(){
  string s= "baeyh";
  int k= 2;
  cout<<countBinary(s,k);
  return 0;
}