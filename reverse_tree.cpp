#include<iostream>
#include<vector>


using std::vector;
using std::swap;

struct TreeNode {
	int value;
	TreeNode* right;
	TreeNode* left;
	TreeNode(int x): value(x), right(NULL), left(NULL){}
};

class Solution {
public:
	TreeNode* InvertTree(TreeNode* Root) {
		if (Root == NULL) return Root;
		swap(Root->left, Root->right);  // 中
		InvertTree(Root->left);         // 左
		InvertTree(Root->right);        // 右
		return Root;
	}

};