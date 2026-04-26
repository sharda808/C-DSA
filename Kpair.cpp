#include<iostream>
#include<vector>
#include<set>
using namespace std;
    int findPairs(vector<int>& nums, int k) {
      int n = nums.size();
      set<pair<int,int>>s;
for(int i=0; i<n; i++){
  for(int j=i+1; j<n; j++){
    if(abs(nums[i]-nums[j])==k){
      s.insert({min(nums[i],nums[j]),max(nums[i],nums[j])});
    }
  }
}
return s.size();
    }
    int main(){
     
      vector<int>nums = {3,1,4,1,5};
      int k =2;

cout<<findPairs(nums,k);
return 0;
    }