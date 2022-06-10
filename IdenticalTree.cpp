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
//Idea is
// Go left and right simultaneoulsy of both the tree and compare there values are same or not 
// If the values are same then return true else rturn false;
bool IdenticalTree(Node *root1,Node *root2)
{
    if(root1==NULL and root2==NULL) return true;
    if(root1==NULL || root2==NULL) return false;
bool leftCall=IdenticalTree(root1->left,root2->left);
bool rightCall=IdenticalTree(root1->right,root2->right);   
if(leftCall and rightCall and (root1->data==root2->data) ) return true;

return false;
}


int main()
{
    return 0;
}