#include<iostream>
using namespace std;
void countDigitSpecial(string s){
  int digit =0, special =0;
  for(char ch:s){
    if(ch >='0' && ch <='9'){
      digit++;
    }
    else if((ch>='a' && ch<='z') ||
  (ch>='A' && ch<='Z')
  ){

  }
  else{
    special++;
  }
  }
cout<<"Digits = " <<digit <<endl;
cout<<"Special Charecter = "<<special<<endl;
}
int main(){
  string s= "ab12@#c9";
  countDigitSpecial(s);
  return 0;
}