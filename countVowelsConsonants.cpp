#include<iostream>
using namespace std;
void countVowelConsonanats(string s){
  int vowels =0, consonants =0;
  for(char ch:s){
    ch = tolower(ch);
    if(ch>='a' && ch<='z'){
    if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u'){
      vowels++;
    }
else{
  consonants++;
}
  }
}
cout<<"Vowels  = "<<vowels <<endl;
cout<<"consonants = "<< consonants<<endl;
}
int main(){
  string s ="hello world";
  countVowelConsonanats(s);
  return 0;
}