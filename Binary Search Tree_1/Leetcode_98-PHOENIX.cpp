class Solution {
public:
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
       vector<int>v;
       inorder(root,v);
       bool flag=true;
        for(int i=1;i<v.size();i++){
            if(v[i-1]>=v[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};