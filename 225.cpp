class MyStack {
public:
    queue<int> que1;
    queue<int> que2;

    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        que1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int size = que1.size();
        size--;
        while (size--) {
            que2.push(que1.front());
            que1.pop();
        }
    }

    int result = que1.front;
    que1.pop();
    que1 = que2;
    while (!que2.empty) {
        que2.pop();
    }
    return result;
};