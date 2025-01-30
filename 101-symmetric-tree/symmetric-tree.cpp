class Solution {
 public:
  bool isSymmetric(TreeNode* root) {
    return checkSymmetry(root, root);
  }

 private:
  bool checkSymmetry(TreeNode* left, TreeNode* right) {
    if (!left || !right) return left == right;
    return left->val == right->val &&
           checkSymmetry(left->left, right->right) &&
           checkSymmetry(left->right, right->left);
  }
};
