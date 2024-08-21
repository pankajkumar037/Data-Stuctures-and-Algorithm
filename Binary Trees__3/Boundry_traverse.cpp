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

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";

    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void leafnode(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) {
        cout<<root->val<<" ";
    }
    leafnode(root->left);
    leafnode(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
   
    rightBoundary(root->right);
    if(root->left==NULL) rightBoundary(root->left);
     cout<<root->val<<" ";
    
}
void boundry(Node* root){
    leftBoundary(root);
    leafnode(root);
    rightBoundary(root->right);
}
int main(){
    int arr[]={1,7,9,2,6,INT_MIN,0,INT_MIN,INT_MIN,8,7,13,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
   Node* root= constructTree(arr,n);
  
//    int level=levels(root);// ye level lake dega

//     for(int i=1;i<=level;i++){
//         nthlevel(root,1,i);
//         cout<<endl;
//     }

   boundry(root);
}