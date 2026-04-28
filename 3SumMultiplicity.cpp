#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int threeSumMultiplicity(vector<int>& arr, int target){
  int n = arr.size();
  long long count =0;
  int mod = 1e9 + 7;
  unordered_map<int,long long>mp;
  for(int i=0; i<n; i++){
    mp[arr[i]]++;
  }
for(auto it1:mp){
  int x = it1.first;
  for(auto it2:mp){
    int y= it2.first;
    int z = target-x-y;
    if(x>y) continue;
    if(mp.find(z) == mp.end()) continue;
    if(y>z) continue;
    if(x==y && y==z){
      count += (mp[x] * (mp[x]-1) * (mp[x]-2))/ 6;
    }
    if()
  }
}

}