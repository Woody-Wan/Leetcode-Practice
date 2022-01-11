#include<iostream>
#include<cmath>

using std::max;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class solution {
public:
	int depth(TreeNode* root) {
		if (root->val == NULL) {
			return 0;
		}
		int rightdepth = depth(root->right);
		int leftdepth = depth(root->left);
		int maxdepth = 1 + max(rightdepth, leftdepth);
		return maxdepth;
	}
};