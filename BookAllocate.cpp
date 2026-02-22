#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr, int n, int m, int maxAllowedPages){
  int students =1, pages =0;
  for(int i=0; i<n; i++){
    if(arr[i]>maxAllowedPages){
      return false;
    }
    if(pages + arr[i]<=maxAllowedPages){
      pages += arr[i];
    }
    else{
      students++;
      pages = arr[i];
    }
  }
  return students > m? false: true;
}
int allocateBooks(vector<int>&arr, int n, int  m){
  int sum =0;
  
}