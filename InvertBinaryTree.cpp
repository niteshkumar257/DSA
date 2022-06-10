#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
//Time complexity of the binary tree O(N)
// height of the Binary Tree

Node *InvertBinaryTree(Node *root)
{
    if(root==NULL) return NULL;
 Node *leftAdd=   InvertBinaryTree(root->left);
  Node *rightAdd=  InvertBinaryTree(root->right);
  swap(leftAdd,rightAdd);
  return root;

}
int main()
{
    return 0;
}