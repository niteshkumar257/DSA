#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// diameter of the binary tree
// calculte the left height and the right of the subtree and 
// diameter=max(diamter,root->val);
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
// Time complexity is O(N);
// Diameter of the  Binary Tree

int Diameter(Node *root,int diameter)
{
    if(root==NULL) return 0;
     int l =Diameter(root->left,diameter);
    int r=Diameter(root->right,diameter);
    diameter=max(diameter,l+r);

    return  max(l,r)+1;
}
int main()
{
    return 0;
}