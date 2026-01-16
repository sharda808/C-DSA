#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int uniquefreq(vector<int>arr){
  unordered_map<int,int>freq;
  
  for(int x:arr){
    freq[x]++;
  }
 for(int x: arr){
  if(freq[x]==1){
    return x;
  }
 }
 return -1;
}
int main(){
  vector<int> arr = {4,5,1,2,2,1,4,5};
  cout<<uniquefreq(arr);
  return 0;
}