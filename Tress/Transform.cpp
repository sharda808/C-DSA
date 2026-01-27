#include<iostream>
#include<vector>
#include<queue>
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
int Transform(Node* root){
  if(root==NULL){
    return 0;
  }
  int leftOld = Transform(root->left);
  int rightOld = Transform(root->right);
  int currOld =  root->data;

  root->data = leftOld + rightOld; 
return currOld + root->data;

}
void levelOrder(Node* root){
  if(root==NULL){
    return;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    int size = q.size();
    for(int i=0; i<size; i++){
      Node* root = q.front();
      q.pop();
      cout<<root->data<<" ";
    
    if(root->left!=NULL) q.push(root->left);
    if(root->right!=NULL) q.push(root->right);
  }
  cout<<endl;
}
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
Transform(root);
levelOrder(root);
}