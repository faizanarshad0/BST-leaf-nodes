#include <iostream>

using namespace std;

// Define a node in the binary search tree
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Recursive function to find the leaf nodes of a binary search tree
void findLeafNodes(TreeNode* root) {
  // Base case: if the root is NULL, there are no leaf nodes to find
  if (root == NULL) return;

  // If the root has no left and right children, it is a leaf node
  if (root->left == NULL && root->right == NULL) {
    cout << root->val << " ";
  }

  // Recursively search the left and right subtrees for leaf nodes
  findLeafNodes(root->left);
  findLeafNodes(root->right);
}

int main() {
  // Create a binary search tree
  TreeNode* root = new TreeNode(10);
  root->left = new TreeNode(5);
  root->right = new TreeNode(15);
  root->left->left = new TreeNode(2);
  root->left->right = new TreeNode(7);
  root->right->left = new TreeNode(12);
  root->right->right = new TreeNode(20);

  // Find and print the leaf nodes of the binary search tree
  findLeafNodes(root);

  return 0;
}
