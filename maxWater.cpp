#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>&height){
  int  n= height.size();
  int i=0, j=n-1;
  int maxWater =0;
  while(i<j){
    int width = j-i;
    int ht = min(height[i],height[j]);
    int currWater = width*ht;
    maxWater = max(maxWater,currWater);
    height[i]<height[j] ? i++:j--;
  }
  return maxWater;
}
int main(){
  vector<int>height = {1,8,6,2,5,4,8,3,7};
  cout<<maxArea(height);
  
  return 0;
}