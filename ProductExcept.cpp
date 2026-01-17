#include<iostream>
#include<vector>
using namespace std;
vector<int>productExcept(vector<int>&arr){
  int n= arr.size();
  vector<int>prefix(n),suffix(n), ans(n);
  // prefix product
prefix[0] = 1;
for(int i=1; i<n; i++) {
  prefix[i] = prefix[i-1] * arr[i-1];
}
// suffix product
suffix[n-1] =1;
for(int i=n-2; i>=0; i--){
  suffix[i] = suffix[i+1] * arr[i+1];
}
for(int i=0; i<n; i++){
  ans[i] = prefix[i] * suffix[i];
}
return ans;
}
int main(){
  vector<int> arr = {1,2,3,4};
  vector<int>result = productExcept(arr);
  for(int x:result){
    cout<<x <<" ";
  }
  return 0;
}