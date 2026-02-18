#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countVowels(string word){
  int count =0;
  for(char ch : word){
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') count++;
  }
return count;
}
string reverseWords(string s){
  int n = s.size();
  string ans = "";
  int first =-1;
 for(int i=0; i<n; i++){
  string word= "";
  int Count=0;
  while(i<n && s[i]!= ' '){
     word += s[i];
    
     i++;
  }
int currentVowelCount = countVowels(word);
if(first ==-1){
  first = currentVowelCount;
}
else {
  if(currentVowelCount== first){
    reverse(word.begin(), word.end());
  }
}
if(ans != "")
ans += " ";
ans += word;
 }
  return ans;
}
int main(){
  string s= "cat and mice";
  cout<<reverseWords(s);
}