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
int idx =-1;
Node* buildTree(vector<int>nodes){
idx++;
if(nodes[idx]==-1){
  return NULL;
}
Node* currRoot = new Node(nodes[idx]);
currRoot->left = buildTree(nodes);
currRoot->right = buildTree(nodes);
return currRoot;
}
void printpath(vector<int>path){
for(int x:path){
  cout<<x<<" ";
}
cout<<endl;
}
void pathHelper(Node* root, vector<int>&path){
if(root==NULL){
  return;
}
path.push_back(root->data);
if(root->left == NULL && root->right ==NULL){
printpath(path);
path.pop_back();
return;
}
pathHelper(root->left, path);
pathHelper(root->right, path);
path.pop_back();
}
void rootToLeafPath(Node* root){
  vector<int>path;
  pathHelper(root, path);
}
int main(){
  vector<int>nodes = {8,5,3,1,-1,-1,4,-1,-1,6,-1,-1,10,-1,11,-1,14,-1,-1};
  Node* root= buildTree(nodes);
rootToLeafPath(root);
}