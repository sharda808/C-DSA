#include<iostream>
#include<vector>
using namespace std;
class TreeNode {
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
TreeNode(int val){
  this->val = val;
  left = right = NULL;
}
};
static int idx =-1;
TreeNode* buildTree(vector<int>nodes){
  idx++;
  if(nodes[idx]==-1){
    return NULL;
  
}
TreeNode* currnode = new TreeNode(nodes[idx]);
currnode->left = buildTree(nodes);
currnode->right = buildTree(nodes);
return currnode;

}


void postorder(TreeNode* node,vector<int>&result){
  if(node==NULL){
    return;
  }
  postorder(node->left,result);
  postorder(node->right,result);
  result.push_back(node->val);
}
vector<int>postorder(TreeNode* root){
  vector<int>result;
  postorder(root,result);
}
int main(){
  vector<int>nodes = {1,2,4,-1,-1,5,-1,6,-1,7,3,-1,-1};
TreeNode* root = buildTree(nodes);
cout<<root->val<<endl;
return 0;
}