#include<iostream>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

class Solution {
public:
	int sumOfLeftLeaves(TreeNode* root) {
		if (root == NULL) {
			return 0;
		}
		
		int leftvalue = sumOfLeftLeaves(root->left);
		int rightvalue = sumOfLeftLeaves(root->right);

		int midValue = 0;
		if (root->left && !root->left->left && !root->left->right) {
			midValue = root->left->val;
		}
		int sum = midValue + leftvalue + rightvalue;
		return sum;
	}
};