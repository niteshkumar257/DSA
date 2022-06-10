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
// Inorer traversal
void inorder(Node *root)
{
    if(root==NULL) return ;
   inorder(root->left);
   cout<<root->data;
   inorder(root->right);
    
}
// Inorder Traversal Iterative


void Preorder(Node *root)
{
    if(root==NULL) return ;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);

}
// preprder iterative method
void PreorderIterative(Node *root)
{
    stack<Node *> st;
    
}

// postOrder traversal

void Postorder(Node *root)
{
    if(root==NULL) return ;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

// level order traversal

void LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        while(size--)
        {
            Node *temp=q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

        }
        cout<<endl;
    }
}



// is lead node or not
bool isLeaf(Node *root)
{
    if(root->left==NULL and root->right==NULL) return false;
    else return true;
}

// left leaf sum 
int sumOfleftLeaves(Node *root,bool flag,int sum)
{
    // base case
    if(root==NULL) return 0;
    if(isLeaf(root))
    {
        sum+=root->data;
    }
   sumOfleftLeaves(root->left,true,sum);
   sumOfleftLeaves(root->right,false,sum);

}

// left of the tree
// left view of the tree
void leftView(Node *root)
{

}

// right view of the tree
void rightView(Node *root)
{


}
bool mirrorOfTree(Node *root)
{

}




int main()
{
    return 0;
}