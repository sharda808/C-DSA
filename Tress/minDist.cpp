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
  static int idx =-1;
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
Node* Lca2(Node* root, int n1, int n2){
  if(root==NULL){
    return NULL;
  }
  if(root->data == n1 || root->data == n2){
    return root;
  }
  Node* leftLca = Lca2(root->left, n1,n2);
  Node* rightLca = Lca2(root->right, n1,n2);
  if(leftLca !=NULL && rightLca !=NULL){
    return root;
  }
  return leftLca == NULL ? rightLca:leftLca;
}
int dist(Node* root, int n){
  if(root==NULL){
    return -1;
  }
if(root->data==n){
  return 0;
}
int leftDist = dist(root->left, n);
if(leftDist!=-1){
  return leftDist+1;
}
int rightDist = dist(root->right,n);
if(rightDist!=-1){
  return rightDist +1;
}
return -1;
}
int  minDist(Node* root, int n1,int n2){
  Node* Lca = Lca2(root, n1,n2);
  int dist1 = dist(Lca, n1);
  int dist2 = dist(Lca, n2);
  return dist1 + dist2;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
  cout<<minDist(root, 4,6);
}
    