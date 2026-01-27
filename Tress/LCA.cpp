#include<iostream>
#include<vector>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
   Node(int data){
    this->data =data;
   left = right = NULL; 
  }
};
static int idx =-1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx]==-1){
    return NULL;
  }
  Node* currroot = new Node(nodes[idx]);
  currroot->left = buildTree(nodes);
  currroot->right = buildTree(nodes);
  return currroot;
}
bool rootToNodePath(Node* root, int n, vector<int>&path){
  if(root==NULL){
    return false;
  }
  path.push_back(root->data);
  if(root->data==n){
    return true;
  }
  if(rootToNodePath(root->left, n, path) ||
     rootToNodePath(root->right, n, path)){
    return true;
  }
  path.pop_back();
  return false;
}
int LCA (Node* root, int n1, int n2){
vector<int>path1;
vector<int>path2;
rootToNodePath(root,n1,path1);
rootToNodePath(root, n2,path2);
int lca =-1;
for(int i=0; i<path1.size() && i<path2.size(); i++){
  if(path1[i]!=path2[i]){
return lca;
  }
  lca = path1[i];
}
return lca;
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
  int n1=4, n2=6;
  cout<<"lac = "<<LCA(root,n1,n2);
  return 0;
}