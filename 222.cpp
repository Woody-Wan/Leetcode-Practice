#include<iostream>

struct TreeNode{
	int val;
	TreeNode* right;
	TreeNode* left;
	TreeNode(int x) : val(x), right(NULL), left(NULL) {}
};

class solution {
public:
	int getNode(TreeNode* root) {
		if (root == NULL) {
			return 0;
		}
		int RightNode = getNode(root->right);
		int LeftNode = getNode(root->left);
		int Sum = RightNode + LeftNode + 1;
		return Sum;
	}
	int countNodes(TreeNode* root) {
		return getNode(root);
	}
};