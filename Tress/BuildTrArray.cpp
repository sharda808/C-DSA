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
left = right = NULL;
  }
};
Node* buildTree(int arr[],int n, int i){
  if(i>=n){
    return NULL;
  }
Node* root= new Node(arr[i]);
root->left = buildTree(arr, n, 2*i+1);
root->right = buildTree(arr,n, 2*i+2);
return root;
}
int main(){
  int arr[] = {1,2,3,4,5,6};
  Node* root= buildTree(arr,6,0);
  cout<<root->left->data<<endl;
  return 0;
}