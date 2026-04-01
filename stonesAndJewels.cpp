#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int stonesAndjewels(string stones,string jewels){
  unordered_map<char,int>mp;
  for(int i=0; i<stones.size(); i++){
    mp[stones[i]]++;
  }
  int count =0;
  for(int i=0; i<jewels.size(); i++){
    if(mp.count(jewels[i])){
      count += mp[jewels[i]];
    }
  }
  return count;
}
int main(){
  string stones = "aAAbcc", jewels = "aA";
  cout<<stonesAndjewels(stones,jewels);
  return 0;
}
