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
void leftView(Node *root,int level,vector<int> ans)
{
      if(root==NULL);
      if(ans.size()==level) ans.push_back(root->data);
      leftView(root->left,level,ans);
      leftView(root->right,level,ans);
}
int main()
{
    return 0;
}