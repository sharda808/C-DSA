#include<iostream>
#include<vector>
#include<queue>
#include<climits>
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
static int idx=-1;
Node* buildTree(vector<int>&nodes){
  idx++;
  if(nodes[idx]==-1){
return NULL;
  }
Node* currNode = new Node(nodes[idx]);
currNode->left = buildTree(nodes);
currNode->right = buildTree(nodes);
return currNode;
}
int LevelOrder(Node* root){
  if(root==NULL){
    return 0;
  }
 queue<Node*>q;
 q.push(root);
  int maxSum = INT_MIN;
  
  int level =1;
  int ans =1;
  while(!q.empty()){
int size = q.size();
int levelSum =0;
while(size--){
  Node* node = q.front();
  q.pop();
levelSum += node->data;
if(node->left)
q.push(node->left);
if(node->right)
q.push(node->right);
}
if(levelSum>maxSum){
maxSum = levelSum;
ans = level;
}
level++;
  }
  return ans;
}
int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root = buildTree(nodes);
  cout<<LevelOrder(root);
}