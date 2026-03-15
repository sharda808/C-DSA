#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int>pq;
  pq.push(2);
  pq.push(3);
  pq.push(5);
  while(!pq.empty()){
  cout<<"top: "<<pq.top()<<endl;
pq.pop();
  }
  return 0;
}