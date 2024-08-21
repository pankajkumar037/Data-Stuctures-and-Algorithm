// Doing BFS by using DFS Method 
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
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthlevel(Node* root,int curr,int target){
    if(root==NULL) return;
    if(curr==target) {
        cout<<root->val<<" ";
        return; // ye optimize kar dega
    }
    nthlevel(root->left,curr+1,target);
    nthlevel(root->right,curr+1,target);

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

    int level=levels(a);// ye level lake dega

    for(int i=1;i<=level;i++){
        nthlevel(a,1,i);
        cout<<endl;
    }
    
}