#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using std::vector;
using std::queue;
using std::stack;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		queue<TreeNode*> que;
		if (root != NULL) {
			que.push(root);
		}
		vector<vector<int>> result;
		while (!que.empty()) {
			int size = que.size();
			vector<int> vec;
			for (int i = 0; i < size; i++) {
				TreeNode* node;
				node = que.front();
				que.pop();
				vec.push_back(node->val);
				if (node->left) {
					que.push(node->left);
				} 
				if (node->right) {
					que.push(node->right);
				}
			}
			result.push_back(vec);
		}
		return result;
	}
};