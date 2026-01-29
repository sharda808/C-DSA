#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
int static idx =-1;
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
vector<int>topView(Node* root){
  vector<int>ans;
  if(root==NULL){
    return ans;

  }
  map<int, int>mp;
  queue<pair<Node*, int>>q;
  q.push({root,0});
  while(!q.empty()){
    auto front = q.front();
    q.pop();
    Node* root = front.first;
    int hd = front.second;
    if (mp.find(hd)==mp.end()){
      mp[hd] = root->data;
    }
    if(root->left!=NULL){
      q.push({root->left,hd-1});
    }
    if(root->right!=NULL){
      q.push({root->right, hd+1});
    }
  }
  for(auto it:mp){
    ans.push_back(it.second);
  }
  return ans;
}

int main(){
vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = buildTree(nodes);
topView(root);
vector<int>ans = topView(root);
for(int x:ans){
  cout<<x<<" ";
}
return 0;
}
