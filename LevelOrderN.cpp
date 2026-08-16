#include<iostream>
#include<queue>
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
static int idx = -1;
Node* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx] ==-1){
    return NULL;
  }
  Node* currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);
return currNode;
}
vector<int> LevelOrder(Node* root){
queue<Node*>q;
vector<int>left;
q.push(root);
while(!q.empty()){
  int size = q.size();
for(int i=0; i<size; i++){
  Node* node = q.front();
  q.pop();
  if(i==0){
left.push_back(node->data);
  }
if(node->left)
 q.push(node->left);
 if(node->right)
 q.push(node->right);

}
}
return left;

}
int main(){
  vector<int>nodes ={1,2,4,-1,-1, 5,-1,-1,3, 6,-1,-1,7,-1,-1};
  Node* root = buildTree(nodes);
 vector<int>ans = LevelOrder(root);
for(int x:ans){
  cout<<x<<" ";
}
return 0;
}