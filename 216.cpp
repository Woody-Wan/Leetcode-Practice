#include<iostream>
#include<vector>

using std::vector;

class Solution {
private:
	vector<vector<int>> result;
	vector<int> path;
	void backtrack(int target, int num, int sum, int start){
		if (path.size() == num) {
			if (sum == target)
			{
				result.push_back(path);
			}
			return;
		}
		if (sum > target) {
			return;
		}
		for (int i = start; i <= 9; i++) {
			sum += i;
			path.push_back(i);
			backtrack(target, num, sum, i + 1);
			sum -= i;
			path.pop_back();
		}
	}

public:
	vector<vector<int>> sumcombination(int sum, int num) {
		backtrack(sum, num, 0, 1);
		return result;
	}
	
};