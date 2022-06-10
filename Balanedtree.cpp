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

int height(Node *root)
{
    if(root==NULL) return 0;
   int l =height(root->left);
   if(l==-1) return -1;
    int r=height(root->right);
if(r==-1) return -1;
    if(abs(l-r)>1) return -1;
    return max(l,r)+1;
}
int main()
{
    return 0;
}