class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        postorder(root,result);
        return result;
    }
    private:
        void postorder(TreeNode* node,vector<int>& result){
            if(node == nullptr){
                return ;
            }
            postorder(node->left,result);
            postorder(node->right,result);
            result.push_back(node->val);
        }
};