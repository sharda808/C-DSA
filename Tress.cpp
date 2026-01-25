#include<iostream>
#include<vector>
#include <climits>
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
  Node * currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);
  return currNode;
}
bool ishelper(Node* root, long minVal, long maxVal){
  if(root==NULL){
    return true;
  }
  if(root->data <= minVal || root->data>=maxVal){
    return false;
  }
  return ishelper(root->left ,minVal, root->data) &&
  ishelper(root->right, root->data, maxVal);
}
bool isValidBST(Node* root){
return ishelper(root,LONG_MIN,LONG_MAX);
}

int main(){

    vector<int> nodes = {1,2,4,-1,1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    if(isValidBST(root))
        cout << "Valid BST";
    else
        cout << "Not a Valid BST";
}
