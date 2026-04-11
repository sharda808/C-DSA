#include<iostream>
#include<string>
using namespace std;
bool isSubstring(string a, string b){
  int n = a.size();
  int m = b.size();
  for(int i=0; i<n-m; i++){
    int j =0;
    while(j<m && a[i+j]== b[j]){
      j++;
    }
    if(j==m) return true;
  }
  return false;
}
int matchingSubstring(string a, string b){
int n = a.size();
int m = b.size();
int count =1;
  string temp = a;
  while(temp.size() <b.size()){
    temp += a;
    count++;
  }
if(isSubstring(temp,b)){
  return count;
}
temp += a;
if(isSubstring(temp,b)){
  return count+1;
}
return -1;
}
int main(){
string a = "abcd";
string b = "cdabcdab";
cout<<matchingSubstring(a,b);
return 0;
}