#include<iostream>
#include<vector>
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
Node* insert(Node* root, int val){
  if(root==NULL){
    root= new Node(val);
    return root;
  }
  if(val<root->data){
root->left = insert(root->left, val);
  }
  else{
    root->right = insert(root->right, val);
  }
  return root;
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i < n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}
int sum=0;
void dfs(Node* root){
  if(root==NULL) return;
  dfs(root->right);
  sum += root->data;
  root->data = sum;
dfs(root->left);

}
Node* bstToGST(Node* root){
  sum =0;
  dfs(root);
  return root;
}
void inorder(Node* root){
  if(root==NULL) return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
int main(){
    int arr[9] = {4,1,6,0,2,5,7,3,8};
  Node* root = buildBST(arr,9);
bstToGST(root);
inorder(root);
return 0;
}
// class Solution {
// public:
//     TreeNode* reverseOddLevels(TreeNode* root) {
//       if(root==NULL) return root;
//        queue<TreeNode*>q;
//        q.push(root);
//        int level=0;
//        while(!q.empty()){
//         int size = q.size();
// vector<TreeNode*>nodes;
//         for(int i=0; i<size; i++){
//             TreeNode* root = q.front();
//             q.pop();
//             if(level % 2 ==1){
//           nodes.push_back(root);
//             }
//             if(root->left) q.push(root->left);
//             if(root->right) q.push(root->right);
//         }
//             if(level % 2 ==1){
//                 int i=0, j= nodes.size()-1;
//                 while(i<j){
                
//                swap(nodes[i]->val, nodes[j]->val);
//                i++;
//                j--;
//                 }
//             }
//             level++;
//         }
//         return root;
//        }
    
// };