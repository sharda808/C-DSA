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
Node* insert(Node* root, int val){
  if(root==NULL){
    root= new Node(val);
    return root;
  }
  if(val<root->data){
root->left = insert(root->left, val);
  }
  else{
    root->right = insert(root->right, val);
  }
  return root;
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i < n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}
Node* getInOrderSuccsor(Node* root){
while(root->left!=NULL){
  root= root->left;
}
return root;
}
Node* deleteNode(Node* root, int val){
  if(root==NULL){
    return NULL;
  }
  if(val<root->data){
    root->left = deleteNode(root->left, val);
  }
  else if(val>root->data){
root->right = deleteNode(root->right, val);
  }
  else{
    if(root->left == NULL && root->right==NULL){
      delete root;
      return NULL;
    }
    if(root->left==NULL || root->right == NULL){
      Node* child = root->left == NULL ? root->right:root->left;
      delete root;
      return  child;
    }
    Node* IS = getInOrderSuccsor(root->right);
    root->data = IS->data;
    root->right = deleteNode(root->right, IS->data);
  }
  return root;
}
void InOrder(Node* root){
  if(root==NULL){
    return;
  }
  InOrder(root->left);
cout<<root->data<<" ";
InOrder(root->right);

}
int main(){
    int arr[6] = {5,3,6,2,4,7};
  Node* root = buildBST(arr,6);
InOrder(root);
cout<<endl;
deleteNode(root,3);
InOrder(root);
cout<<endl;
return 0;
}