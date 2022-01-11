#include<iostream>
#include<vector>
#include<stack>

using std::vector;
using std::stack;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> PreorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		vector<int> result;
		if (root == NULL) {
			return result;
		}
		st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			st.pop();
			result.push_back(node->val);
			if (node->right) {
				st.push(node->right);
			}
			if (node->left) {
				st.push(node->left);
			}
			return result;
		}
	}
};

class Solution_Inorder {
public:
	vector<int> InorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while (cur != NULL || !st.empty()) {
			if (cur != NULL) {
				st.push(cur);
				cur = cur->left;
			}
			else {
				cur = st.top();
				st.pop();
				result.push_back(cur->val);
				cur = cur->right;
			}
		}
		return result;
	}
};

class Solution_Postorder {
public:
	vector<int> PostOrderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while(!st.empty()) {
			TreeNode* node = st.top();
			st.pop();
			result.push_back(cur->val);
			if (node->left) {
				cur = node->left;
			}
			if (node->right) {
				cur = node->right;
			}
		}
		reverse(result.begin(), result.end());
		return result;
	}
};