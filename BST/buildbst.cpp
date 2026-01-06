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
Node* Insert(Node* root,int val){
  if(root==NULL){
    root= new Node(val);
    return root;
  }
    if(val>root->data){
      root->left = Insert(root->left,val);
    }
    else {
      root->right = Insert(root->right,val);
    }
    return root;
}
Node*buildBST(int arr[],int n){
  Node* root = NULL;
  for(int i=0; i<n; i++){
    root = Insert(root,arr[i]);
  }
return root;
}
void Inorder(Node* root){
  if(root==NULL){
    return;
  }
 Inorder(root->left);
 cout<<root->data<<" ";
 Inorder(root->right);
}
bool Search(Node* root,int key){
  if(root==NULL){
    return false;
  }
  if(root->data==key){
    return true;
  }
  else if(root->data>key){
    return Search(root->left,key);
  }
  else {
    return Search(root->right,key);
  }
}
int main(){
  int arr[6] = {5,1,3,4,2,7};
  Node* root = buildBST(arr,6);
  // Inorder(root);
  cout<<Search(root,5)<<endl;

  return 0;
}
