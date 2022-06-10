#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// symmeric tree is all about 
// function(root->left , root->right) 
// if the left subtree and the right subtree of the binary tree is mirror of each other then the tree is symmeric tree
class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data=data;
    }
};
bool mirror(Node *root1,Node *root2)
{
    if(root1==NULL and root2==NULL) return true;
    if(root1==NULL || root2==NULL) return false;
  bool l=  mirror(root1->left,root2->right);
  bool r=  mirror(root1->right,root2->left);
  if(l && r && (root1->data==root2->data)) return true;
  
  return false;
    
}
bool isSymmeticTree(Node *root)
{
    if(mirror(root->left,root->right)) return true;
    else return false;
}
int main()
{
    return 0;
}