#include<iostream>

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class solution {
public:
	bool compare(TreeNode* left, TreeNode* right) {
		if (left == NULL && right == NULL) {
			return true;
		}
		else if (left->val == right->val) {
			return true;
		}
		
		bool outside = compare(left->left, right->right);
		bool inside = compare(left->right, right->left);
		if (outside && inside) {
			return true;
		}
		return false;
	}
	bool symmetric(TreeNode* root) {
		if (root == NULL) {
			return true;
		}
		return compare(root->left, root->right);
	}

	

};