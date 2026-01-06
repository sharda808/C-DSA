#include<iostream>
using namespace std;
char FirstNonRepeating(string s){
  int freq[26] = {0};
  for(int i=0; i<s.length(); i++){
    freq[s[i]-'a']++;
  }
  // check
  for(int i=0; i<s.length(); i++){
   if(freq[s[i] - 'a'] == 1){
    
      return s[i];
   }
  }
  
return '\0';
}
int main(){
  string s= "aabbcc";
  cout<<FirstNonRepeating(s);
  return 0;
}