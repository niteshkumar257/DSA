#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// travers through the tree and go to each level
// first go to root->right then go to root->left 
// first you encounter the node push that node in to the vector 
//The idea is while traversing for every level you will counter the first node from the right is the result node
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
void RightView(Node *root,int level,vector<int> ans)
{
   if(root==NULL);
      if(ans.size()==level) ans.push_back(root->data);
       RightView(root->right,level,ans);
      RightView(root->left,level,ans);
     

}
int main()
{
    return 0;
}