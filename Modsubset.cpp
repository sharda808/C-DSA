#include<iostream>
#include<vector>
using namespace std;
void solve(int index,vector<int>&nums, vector<int>& temp, vector<vector<int>> & ans){
  ans.push_back(temp);
  for(int i=index; i<nums.size(); i++){
    temp.push_back(nums[i]);
    solve(i+1, nums,temp, ans);
    temp.pop_back();
  }
}
vector<vector<int>>subsetWithDup(vector<int>&nums){
vector<vector<int>>ans;
vector<int>temp;
solve(0, nums, temp,ans);
return ans;
}
int main(){
  vector<int> nums = {1,2,3};
  vector<vector<int>>result = subsetWithDup(nums);
  for(auto x:result){
     cout << "{ ";
        for(int element : x){
            cout << element << " ";
        }
        cout << "}" << endl;
    }
  return 0;
}