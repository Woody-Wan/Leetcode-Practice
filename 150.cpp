#include<vector>
#include<string>
#include<stack>

using std::string;
using std::vector;
using std::stack;
using std::stoi;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (char i = 0; i < tokens.size(); i++) {
            if (tokens.at(i) == "+"  || tokens.at(i) == "-" || tokens.at(i) == "*" || tokens.at(i) == "/") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if (i == '+') {
                    st.push(num1 + num2);
                }
                if (i == '-') {
                    st.push(num1 - num2);
                }
                if (i == '*') {
                    st.push(num1 * num2);
                }
                if (i == '/') {
                    st.push(num1 / num2);
                }
            }
            else {
                st.push(stoi(tokens.at(i)));
            }
            int result = st.top();
            return result;
        }
    }
};