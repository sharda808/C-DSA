#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
  int minprice = prices[0];
  int maxprofit =0;
  for(int i=1; i<prices.size(); i++){
    // upadte minprices
minprice = min(minprice,prices[i]);
int profit = prices[i] - minprice;
maxprofit = max(maxprofit, profit);
  }
  return maxprofit;
}
int main(){
  vector<int>prices = {7,1,5,3,6,4};
  cout<< maxProfit(prices);
  return 0;
}