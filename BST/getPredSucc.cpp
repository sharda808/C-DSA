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
Node* rightMOSTInLeftSubtree(Node* root){
  Node* ans;
  while(root!=NULL){
    ans = root;
    root = root->right;
  }
  return ans;
}
Node* LeftMOSTInRightSubtree(Node* root){
  Node* ans;
  while(root!=NULL){
    ans = root;
    root = root->left;
  }
  return ans;
}
vector<int>getPredSucc(Node* root, int key){
  Node* curr = root;
  Node* pred = NULL;
  Node* succ = NULL;
  while(curr!=NULL){
    if(key<curr->data){
      succ = curr;
      curr= curr->left;
    }
    else if(key>curr->data){
      pred = curr;
      curr = curr->right;
    }else{
      if(curr->left!=NULL){
        pred = rightMOSTInLeftSubtree(root->left);
      }
      if(curr->right!=NULL){
        succ  = LeftMOSTInRightSubtree(root->right);
      }
      break;
    }
  }
  return{pred->data,succ->data};
}
int main(){
  Node* root = new Node(6);
  root->left = new Node(4);
  root->right = new Node(8);
  root->left->left = new Node(1);
  root->left->right = new Node(5);
  root->right->left = new Node(7);
  root->right->right = new Node(9);
  int key = 3;
  vector<int>ans = getPredSucc(root, key);
  cout<<"Precedessor: " <<ans[0] <<endl;
cout<<"successsor: " <<ans[1] <<endl;
return 0;
}