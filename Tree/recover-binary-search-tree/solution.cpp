/**
 * Problem: Recover Binary Search Tree
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/recover-binary-search-tree/
 * Time Complexity: O(n)
 * Space Complexity: O(h) recursion stack, where h is the tree height (O(log n) balanced, O(n) worst case)
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
    public:
  void recoverTree(TreeNode* root) {
    inorder(root);
    swap(x, y);
  }

 private:
  TreeNode* pred = nullptr;
  TreeNode* x = nullptr;  // the first wrong node
  TreeNode* y = nullptr;  // the second wrong node

  void inorder(TreeNode* root) {
    if (root == nullptr)
      return;

    inorder(root->left);

    if (pred && root->val < pred->val) {
      y = root;
      if (x == nullptr)
        x = pred;
      else
        return;
    }
    pred = root;

    inorder(root->right);
  }

  void swap(TreeNode* x, TreeNode* y) {
    const int temp = x->val;
    x->val = y->val;
    y->val = temp;
  }
};