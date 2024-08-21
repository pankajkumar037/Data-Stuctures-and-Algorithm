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

void horLevel(Node* root,int& minlevel,int& maxlevel,int level){
    if(root==NULL) return;
    maxlevel=max(maxlevel,level);
    minlevel=min(minlevel,level);
    horLevel(root->left,minlevel,maxlevel,level-1);
    horLevel(root->right,minlevel,maxlevel,level+1);
}
void topview(Node* root,vector<int>&top,int level){
    if(root==NULL) return;
    if(top[level]==INT_MIN) top[level]=root->val;
    topview(root->left,top,level-1);
    topview(root->right,top,level+1);

}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    
   Node* root= constructTree(arr,n);
   int minlevel=0;
   int maxlevel=0;
   horLevel(root,minlevel,maxlevel,0);
  
  int totalhorlevel=maxlevel-minlevel+1;
  vector<int>top(totalhorlevel,INT_MIN);

  topview(root,top,-minlevel);
  for(int i=0;i<top.size();i++){
    cout<<top[i]<<" ";
  }
   
}