#include<iostream>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

class solution {
public:
	int result;
	void getDepth(TreeNode* node, int depth) {
		if (result > depth) {
			result = result;
		}
		else {
			result = depth;
		}
		if (node->left == NULL && node->right == NULL) {
			return ;
		}
		if (node->left) {
			depth += 1;
			getDepth(node->left, depth);
			depth--;
		}
		if (node->right) {
			depth++;
			getDepth(node->right, depth);
			depth--;
		}
		return;
	}
	int maxDepth(TreeNode* root) {
		result = 0;
		if (root == NULL) {
			return result;
		}
		getDepth(root, 1);
		return result;
	}
};