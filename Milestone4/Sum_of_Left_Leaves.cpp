int sum=0;

int ans(TreeNode* root,bool v){
     if(!root)
        return 0;
    if(!root->left&&!root->right&&v){
         return root->val;
    }
   return ans(root->left,true) + ans(root->right,false);
    
}
int sumOfLeftLeaves(TreeNode* root) {
    return ans(root,false);
    
            
}
