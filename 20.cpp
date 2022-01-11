#include <iostream>
#include <stack>
#include <string>

using std::stack;
using std::string;

class Solution {
public:
	bool IsValid(string s) {
		stack<int> result;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				result.push(')');
			}
			else if (s[i] == '[') {
				result.push(']');
			}
			else if (s[i] == '{') {
				result.push('}');
			}

			else if (s[i] != result.top() || s.empty()) {
				return false;
			}
			else {
				result.pop();
			}
			if (result.empty()) {
				return true;
			}
		}
	}
};