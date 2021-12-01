#include<string>

using std::string;

class Solution {
public:
	string removeDuplicates(string S) {
		string result;
		for (char s : S) {
			if (result.empty() || s != result.back()) {
				result.push_back(s);
			}
			else {
				result.pop_back();
			}
		}
		return result
	};
}