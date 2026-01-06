#include<iostream>
#include<vector>
using namespace std;
//create Node
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
int Sum(Node* root){
  if(root==NULL){
    return 0;
  }
  int leftS = Sum(root->left);
  int rightS = Sum(root->right);
  int nodesSum = leftS + rightS + root->data;
  return nodesSum;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = buildTree(nodes);
cout<<"sum of  all nodes in tree is:"<<Sum(root)<<endl;
return 0;

  }


