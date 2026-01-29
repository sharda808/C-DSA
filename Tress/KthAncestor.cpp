#include<iostream>
#include<vector>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
this->data = data;
left= right = NULL;
  }
};
static int idx =-1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx]==-1){
    return NULL;
  }
  Node* currRoot = new Node(nodes[idx]);
  currRoot->left = buildTree(nodes);
  currRoot->right = buildTree(nodes);
  return currRoot;
}
int KthAncestor(Node* root, int node, int k){
  if(root==NULL){
    return -1;
  }
  if(root->data==node){
    return 0;
  }
int left = KthAncestor(root->left, node,k);
int right = KthAncestor(root->right, node,k);
  if(left==-1 && right==-1){
    return -1;
  }
  int validDist = left == -1 ?right:left;
  if(validDist+1==k){
    cout<<"Kth Ancestor :" <<root->data<<endl;
  }
  return validDist+1;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
  KthAncestor(root, 6,1);
  return 0;
}