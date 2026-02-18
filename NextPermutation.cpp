#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>&A){
  int pvt =-1;
  int n= A.size();
for(int i=n-1; i>=0; i--){
  if(A[i]<A[i+1]){
    pvt =-1;
    break;
  }
}
}