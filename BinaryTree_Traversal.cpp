#include<iostream>
#include<vector>

using std::vector;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class solution1 {
public:
	void traversal(TreeNode* cur, vector<int>& vec) {
		if (cur == NULL) {
			return;
		}
		vec.push_back(cur->val);
		traversal(cur->left, vec);
		traversal(cur->right, vec);
	}
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}
};

class solution2 {
public:
	void traversal(TreeNode* cur, vector<int>& vec) {
		traversal(cur->left, vec);
		vec.push_back(cur->val);
		traversal(cur->right, vec);

	}
};

class solution3 {
public:
	void traversal(TreeNode* cur, vector<int>& vec) {
		traversal(cur->left, vec);
		traversal(cur->right, vec);
		vec.push_back(cur->val);

	}
};