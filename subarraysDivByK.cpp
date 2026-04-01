#include<iostream>
#include<vector>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k){
  int n = nums.size();
  int count =0;
  for(int i=0; i<n; i++){
    int sum =0;
    for(int j=i; j<n; j++){
      sum += nums[j];
      if(sum %  k==0){
        count++;
      }
    }
  }
  return count;
}
//     int subarraysDivByK(vector<int>& nums, int k) {
//        int n = nums.size() ;
//        int count =0;
//        int sum =0;
//        unordered_map<int,int>mp;
// mp[0] = 1;
//        for(int i=0; i<n; i++){
//        sum += nums[i];
//        int rem = sum % k;
//        if(rem<0){
//         rem +=k;
//        }
//        if(mp.find(rem) != mp.end()){
//         count += mp[rem] ;
//        }
//        mp[rem]++;
//        }
//        return count;
//     }
int main(){
  vector<int>nums = {4,5,0,-2,-3,1};
  cout<<subarraysDivByK(nums,5);
  return 0;
}

