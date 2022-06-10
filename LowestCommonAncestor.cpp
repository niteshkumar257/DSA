#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// idea
// Return null if you  encounter and null 
// Return addres of the p pointer if you encounter the node in the binary tree
// Return the address of the pointer q if you encounter the node in the binary tree
// Return addres of the root if you get root addres from the left and from the right
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
Node *lowestCommonAncestor(Node *root,Node *p,Node *q)
{
    if(root==NULL || root==p || root==q) return root;
    Node *leftTemp=lowestCommonAncestor(root->left,p,q);
    Node *rightTemp=lowestCommonAncestor(root->right,p,q);
    if(leftTemp==NULL and rightTemp!=NULL) return rightTemp;
    else if(leftTemp!=NULL and rightTemp==NULL) return leftTemp;
    else if(leftTemp!=NULL and rightTemp!=NULL) return root;
}
int main()
{
    return 0;
}