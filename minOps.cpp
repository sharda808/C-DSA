#include<iostream>
#include<climits>
using namespace std;
int minOps(string s){
  int n = s.size();
  int maxDist = INT_MIN;
  int dist =0;
  for(int i=0; i<n; i++){
    char ch = s[i];
    if(ch=='a'){
      dist = 0;
    }
    else{
      dist = 'z' - ch+1;
    }
    maxDist = max(maxDist, dist);
  }
  return maxDist;
}
int main(){
  string s= "yz";
  cout<<minOps(s);
  return 0;
}