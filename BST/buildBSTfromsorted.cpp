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
Node* BuildBstTreefromSorted(int arr[], int st,int end){
  if(st>end){
    return NULL;
  }
  int mid = st+(end-st) / 2;
  Node* curr = new Node(arr[mid]);
  curr->left = BuildBstTreefromSorted(arr,st,mid-1);
  curr->right = BuildBstTreefromSorted(arr,mid+1,end);
  return curr;
}
void preOrder(Node * root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
int main(){
  int arr[] = {3,4,5,6,7,8,9};
  Node* root = BuildBstTreefromSorted(arr,0,6);
  preOrder(root);
  return 0;

}