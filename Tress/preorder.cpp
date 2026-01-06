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
 left= right = NULL; 
 } 
};
static int idx =-1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx] == -1){
    return NULL;
  }
  Node* currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
currNode->right = buildTree(nodes);
return currNode;
}
void Preorder(Node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  Preorder(root->left);
  Preorder(root->right);


}
void Postorder(Node* root){
  if(root==NULL){
    return;
  }
  Postorder(root->left);
  Postorder(root->right);
  cout<<root->data<<" ";
}
int Sum(Node* root){
  if(root==NULL){
    return 0;
  }
  int leftSum = Sum(root->left);
int rightSum = Sum(root->right);
int currSum = leftSum + rightSum + root->data;
return currSum;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
// Preorder(root);
// cout<<endl;
// Postorder(root);
cout<<Sum(root);
return 0;
}