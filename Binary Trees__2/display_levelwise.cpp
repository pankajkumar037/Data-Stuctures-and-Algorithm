// Q.. Print elements of nth level
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void nthlevel(Node* root,int curr,int target){
    if(root==NULL) return;
    if(curr==target) cout<<root->val<<" ";
    nthlevel(root->right,curr+1,target);
    nthlevel(root->left,curr+1,target);
    

}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    nthlevel(a,1,3);


}