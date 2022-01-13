#include<iostream>
#include<vector>

using std::vector;

class Solution {
private:
	vector<vector<int>> result;
	vector<int> path;
	void backtracking(int n, int k, int startIndex) {
		if (path.size() == k) {
			result.push_back(path);
			return;
		}
		for (int i = startIndex; i <= n; i++) {
			path.push_back(i);
			backtracking(n, k, i + 1);
			path.pop_back();
		}
	}
public:
	vector<vector<int>> conbination(int n, int k) {
		backtracking(n, k, 1);
		return result;
	}
	
};