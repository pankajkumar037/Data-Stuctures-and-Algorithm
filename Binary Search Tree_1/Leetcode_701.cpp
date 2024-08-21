#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void insert(TreeNode* root,TreeNode* temp){
        if(root==NULL){
            root=temp;
            return;
        }
        else if (temp->val>root->val){
            if(root->right==NULL){
                root->right=temp;
                return;
            } 
            else insert(root->right,temp);
        }
        else{
            if(root->left==NULL){
                root->left=temp;
                return;
            }
            else insert(root->left,temp);
        }

    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
       TreeNode* temp=new TreeNode(val);
       if(root==NULL) {
        root=temp;
        return root;
       }
       insert(root,temp);
       return root;
        
    }
};