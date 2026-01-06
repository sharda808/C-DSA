#include<iostream>
#include<vector>
using namespace std;
// Create NOde
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
// Build TRee From preorder
static int idx = -1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx]==-1){
    return NULL;
  }
Node* currNode = new Node(nodes[idx]);
currNode->left = buildTree(nodes);
currNode->right = buildTree(nodes);
return currNode;
}
int Height(Node* root){
  if(root==NULL){
    return 0;
  }
  int leftHt = Height(root->left);
  int rightHt = Height(root->right);
  int currHt = max(leftHt,rightHt) + 1;
  return currHt;
}
int count(Node* root){
  if(root==NULL){
    return 0;
  }
  int leftC = count(root->left);
  int rightC = count(root->right);
  int Count = leftC + rightC + 1;
  return Count;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
  Node* root = buildTree(nodes);
  cout<<"Height of tree is:"<<Height(root)<<endl;
  cout<<"count of tree is:"<<count(root)<<endl;
  Node* root2 = new Node(5);
  root2->left = new Node(3);
root2->right = new Node(4);
cout<<"count2:" <<count(root2)<<endl;
cout<<"Height of second tree is:"<<Height(root2);
  return 0;
}