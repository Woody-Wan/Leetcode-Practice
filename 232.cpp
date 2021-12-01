class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    /** Initialize your data structure here. */
    MyQueue() {
    
    }
    void push(int x) {
        stIn.push(x);
    }

    int pop() {
        if (stOut.empty()) {
            while (!stIn.empty()) {
                stOut.push(stIn.pop());
                stIn.pop();
            }
        }
        int result = stOut.top;
        stOut.pop();
        return result;
    }
    int peek() {
            int res = this->pop();
            stOut.push(res);
            return res;
        }

        /** Returns whether the queue is empty. */
    bool empty() {
        return stIn.empty() && stOut.empty();
    }
};