#include<iostream>
#include<vector>
#include<queue>
#include<climits>
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
// Build TRee From preorder
static int idx = -1;
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
vector<int>LargestEachRow(Node* root){
  vector<int>ans;
  if(root==NULL){
    return ans;
  }
  queue<Node*>q;
q.push(root);
while(!q.empty()){
  int size = q.size();
  int maxi = INT_MIN;
  for(int i=0; i<size; i++){
    Node* node = q.front();
    q.pop();
    maxi = max(maxi, node->data);
    if(node->left)
    q.push(node->left);
    if(node->right)
    q.push(node->right);
  }
  ans.push_back(maxi);
}
return ans;
}
int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
  Node* root = buildTree(nodes);
  vector<int>result = LargestEachRow(root);
  for(int x:result){
    cout<<x<<" ";
  }
  return 0;
}