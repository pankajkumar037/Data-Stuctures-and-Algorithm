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
// for printing
void bfs(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
    cout<<endl;
}
Node* constructTree(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN)  l=new Node(arr[i]);
        else l=NULL;

        if(j<n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else  r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
       
    }
    return root;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
   Node* root= constructTree(arr,n);
   bfs(root);
}