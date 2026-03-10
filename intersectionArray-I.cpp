#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<int>intersection(vector<int>&nums1, vector<int>&nums2){
  sort(nums1.begin(),nums1.end());
  sort(nums2.begin(),nums2.end());
int i=0, j=0;
set<int>ans;
while(i<nums1.size() && j<nums2.size()){
  if(nums1[i]==nums2[j]){
    ans.insert(nums1[i]);
    i++;j++;
  }
else if(nums1[i]<nums2[j]) i++;
else j++;
}
return vector<int>(ans.begin(),ans.end());
}
int main(){
  vector<int>nums1 = {1,2,2,3};
  vector<int>nums2 = {2,2};
  vector<int>result = intersection(nums1, nums2);
  for(int x:result){
    cout<<x<<" ";
  }
  return 0;
}