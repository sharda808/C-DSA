#include<iostream>
#include<vector>
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
static int idx = -1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx] ==-1){
    return NULL;
  }
  Node* currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);
return currNode;
}
int sumOfleftLeaves(Node* root){
  if(root==NULL){
    return 0;
  }
  int sum =0;
  if(root->left && root->left->left==NULL && root->left->right==NULL){
sum += root->left->data;
  }
  sum += sumOfleftLeaves(root->left);
  sum += sumOfleftLeaves(root->right);
  return sum;
}
int main(){
  vector<int>nodes = {3,9,-1,-1,20,15,-1,-1,7,-1,-1};
  Node* root= buildTree(nodes);
  cout<<sumOfleftLeaves(root);
  return 0;
}