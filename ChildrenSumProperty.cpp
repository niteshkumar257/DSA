#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// idea
// The approach is same as the diameter of the binary tree 
// In each recursive call we have to check of left and right subtree then
// Then we have to check for the value root->data!=leftValue+rightValue then return -1 
// finally return the root->data after excution of both the function of left and right subtree
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
int solve(Node *root)
{
    if(root==NULL) return 0;
    int leftValue=solve(root->left);
    if(leftValue==-1) return -1;
    int rightValue=solve(root->right);
    if(rightValue==-1) return -1;
    if((leftValue>0 || rightValue>0) and (root->data!=leftValue+rightValue) ) return -1;

    return root->data;
}
bool ChildSumProperty(Node *root)
{
   if(solve(root)==-1) return true;
   else return false;
}
int main()
{
    return 0;
}
