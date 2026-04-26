#include<iostream>
#include<string>
using namespace std;
  bool isVowel(char ch){
    return ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u';
  }
 
long long countVowels(string word){
int n = word.size();
int ans =0;
for(int i=0; i<n; i++){
  if(isVowel(word[i])) {
    ans += (i+1) * (n-i);
  }
}
return ans;
}
int main(){
  string word = "aba";
  cout<<countVowels(word);
  return 0;
}