/*                    ->LeetCode-450<-                         */
class Solution {
public:
    TreeNode* iop(TreeNode* root){
          TreeNode* pred=root->left;
          while(pred->right!=NULL){
              pred=pred->right;
          }
          return pred;
     }
     TreeNode* ios(TreeNode* root){
          TreeNode* suc=root->right;
          while(suc->left!=NULL){
              suc=suc->left;
          }
          return suc;
     }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;

        if(root->val == key){
            // case 1.. No child
            if(root->left==NULL && root->right == NULL) return NULL;
            // case 2.. 1 child
            if(root->left==NULL || root->right == NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            // case 3.. 2 child
            if(root->left!=NULL && root->right !=NULL){
                // replace root with its inorder pred /suc
                //after replacing delete pred /suc
                TreeNode* p=iop(root);
                root->val=p->val;
                root->left=deleteNode(root->left,p->val);
            }
        }
        else if(root->val > key){
          root->left=deleteNode(root->left,key);
        }
        else{
          root->right=deleteNode(root->right,key);
        }
        return root;
    }
};