vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                level.push_back(temp -> val);
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            res.push_back(level[size - 1]);
        }
        return res;
    }
