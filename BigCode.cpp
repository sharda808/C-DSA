#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void swap(int &a, int &b){
//   a = a+b;
//   b = a-b;
//   a = a-b;

// }
// int main(){
//   int a = 3, b =5;
//  swap(a,b);
//    cout<<"a = " <<a << " b=" <<b;
//  return 0;
// }
// bool validPalindrome(string s){
//   int st =0, end = s.size()-1;
//   while(st<end){
//    if(s[st] != s[end]){
//     return false;
//    }
//    st++;
//    end--;
//   }
//   return true;
// }
// int main(){
//   cout<<validPalindrome("madam");
//   return 0;
// }
// string Reverse(string s){
//   int l =0, r = s.size()-1;
//   while(l<r){
//     swap(s[l],s[r]);
//     l++;
//     r--;
//   }
//   return s;
// }
// int main(){
//   string s = "Anshika";
//   cout<<Reverse(s);
//   return 0;
// }
// int fact(int n){
//   if(n==0 || n==1){
//     return 1;
//   }
//   return n* fact(n-1);
// }
// int main(){
//   cout<<fact(5)<<endl;
//   return 0;
// }
// int fib(int n){
//   if(n==0 || n==1){
//     return n;
//   }
//   return fib(n-1) + fib(n-2);
// }
// int main(){
//   int n = 6;
//   cout<<fib(n);
//   return 0;
// }
// int main(){
//   int sum =0;
//   int arr [4] = {1,2,3,5};
//   for(int i=0; i<4; i++){
//     sum += arr[i];
//   }
//   cout<<"Sum of the array is :"<<sum<<endl;
//   return 0;
// }
// int largest(int arr[], int n){
 
//   int max = arr[0];
//   for(int i=0; i<n; i++){
//     if(max<arr[i]){
//       max = arr[i];
//     }
//   }
// return max;
// }
// int main(){
//   int arr [] = {1,4,-1,0};
//   cout<<largest(arr,4);
//   return 0;
// }
// vector<int>TwoSum(vector<int>&nums, int target){
// vector<int>ans;
// int n =nums.size();
// sort(nums.begin(), nums.end());
// int i=0, j= nums.size()-1;
// while(i<j){
//   int sum = nums[i] + nums[j];
//   if(sum>target){
//     j--;
//   }
//   else if(sum<target){
//     i++;
//   }
//   else{
//     ans.push_back(i);
//     ans.push_back(j);
//     return ans;
//   }
// }
// return ans;
// }
// int main(){
//   vector<int>nums = {5, 2, 11, 7, 1};
//   int target = 8;
//   vector<int>result = TwoSum(nums,target);
//  cout<<result[0]<<","<<result[1]<<endl;
//  return 0;
// } 
int countEven(vector<int>&nums){
  int count =0;
  for(int i=0; i<nums.size(); i++){
    if(nums[i] % 2==0){
      count++;
    }
  }
  return count;
}
int main(){
  vector<int>nums = {1,2,6,4};
  cout<<countEven(nums);
  return 0;
}