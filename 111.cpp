#include<iostream>
#include<cmath>

using std::min;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class solution {
public:
	int getDepth(TreeNode* node){
		int leftDepth = getDepth(node->left);           // 左
		int rightDepth = getDepth(node->right);         // 右
														// 中
		// 当一个左子树为空，右不为空，这时并不是最低点
		if (node->left == NULL && node->right != NULL) {
			return 1 + rightDepth;
		}
		// 当一个右子树为空，左不为空，这时并不是最低点
		if (node->left != NULL && node->right == NULL) {
			return 1 + leftDepth;
		}
		int result = 1 + min(leftDepth, rightDepth);
		return result;
	}
	int minDepth(TreeNode* root) {
		return getDepth(root);
	}
};