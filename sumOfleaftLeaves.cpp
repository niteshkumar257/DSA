#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// apporoach is 
// step 1 go to the left and check by passing true in the left side 
// step 2 go ot the right and check by passing false in the right side
// Retuen value from the left tree is added to the result value 
// return the ans of the 

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
 bool isLeaf(Node *root)
 {
     if(root->left ==NULL and root->right==NULL) return true;
     else return false;
 }
    void solve(Node *root,bool flag,int &ans)
    {
        if(root==NULL) return ;
        
        if(isLeaf(root) and flag==true)
        {
            ans+=root->data;
            return ;
        }
        
        solve(root->left,true,ans);
        solve(root->right,false,ans);
    }

    // function
 int sumOfLeftLeaves(Node* root) {
        if(isLeaf(root)) return 0;
        int ans=0;
        solve(root,true,ans);
        return ans;
        
    }
int main()
{
    return 0;
}