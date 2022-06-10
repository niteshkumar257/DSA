#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Idea
// go to left from right for one traversal and then reverse the direction of the traversal 

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
void ZigZagTraversal(Node *root,bool leftToright,vector<vector<int>> ans)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> a;
        while(size--)
        {
            Node *temp=q.front();
            q.pop();
           a.push_back(root->data);
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
           

        }
        if(leftToright==false) reverse(a.begin(),a.end() );
        ans.push_back(a);
        leftToright=!leftToright;
        cout<<endl;
    }
}
//zig zag traversal
int main()
{
    Node *root;
    vector<vector<int>> ans;
    ZigZagTraversal(root,true,ans);
    return 0;
}