#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
class Node {
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    left = right = NULL;
  }
};
static int idx =-1;
Node* buildTree(vector<int>&nodes){
idx++;
if(nodes[idx]==-1){
  return NULL;
}
Node* currRoot = new Node(nodes[idx]);
currRoot->left = buildTree(nodes);
currRoot->right= buildTree(nodes);
return currRoot;
}
int secondLargestSum(Node* root){
  if(root==NULL) {
    return -1;

  }
  queue<Node*>q;
  q.push(root);
long long largest = LLONG_MIN;
long long secondLargest = LLONG_MIN;
while(!q.empty()){
  int size = q.size();
  long long sum =0;
  for(int i=0; i<size; i++){
  Node* root= q.front();
q.pop();
sum += root->data;
if(root->left!=NULL)
  q.push(root->left);

if(root->right!=NULL)
  q.push(root->right);


}
if(sum>largest){
  secondLargest = largest;
  largest = sum;

}
else if(sum<largest &&sum>secondLargest){
  secondLargest = sum;
}
}
if(secondLargest == LLONG_MIN);
return -1;
return secondLargest;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
cout<<secondLargestSum(root);
  return 0;
}